
sub Setup_Auto() {
	
	/declare pckldr string 	outer "Hrelgar"

	/declare buftmr	timer 	outer 30m
	/declare sumtmr timer 	outer 0
	/declare baktmr timer 	outer 0
	/declare rndtmr timer 	outer 0
	
	/declare lstdis float 	outer 0.0
	/declare agrdis float 	outer 35.0

	/declare begmed int 	outer 20
	/declare endmed int 	outer 90
	/declare curtgt int 	outer 0
	
	/declare atomat bool 	outer false
	/declare medtng bool 	outer false

	/keypress esc

	/return
}

sub Check_Auto() {

	/call "Check_Auto_Events"
	/call "Check_Auto_Actions"

	/return
}

sub Check_Auto_Events() {
	
	/doevents Auto

	/return
}

sub Check_Auto_Actions() {

	/if (!${atomat}) /return
	
	/if (${Me.Name.NotEqual[${pckldr}]}) /return

	/call "Check_Auto_Nearby" 
	/if (${Macro.Return}) /return

	/call "Check_Auto_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_Auto_Med"
	/if (${Macro.Return}) /return

	/call "Check_Auto_Target"

	/return
}

sub Check_Auto_Nearby() {

	/declare nrstid int local ${NearestSpawn["NPC"].ID}

	/if (${Spawn[ID ${nrstid}].Distance3D} < ${agrdis} && ${Spawn[ID ${nrstid}].LineOfSight}) {
		
		/if (${nrstid} != ${gl_asstid}) {

			/echo Auto :: Found target nearby.

			/varset gl_asstid ${nrstid}
			/varset gl_incmbt true

			/bc assist on ${gl_asstid}

			/tar ID ${gl_asstid}
			/delay 1
			/stick ID ${gl_asstid} ${gl_assdis}
			/attack on

			/delay 1s

			/return 1

		}  /if (${gl_asstid} != 0) {

			/if (${Target.ID} != ${gl_asstid}) {

				/echo Auto :: Target was first to attack me.
				
				/varset gl_asstid ${Target.ID}
				/varset gl_incmbt true

				/bc assist on ${Target.ID}
			}

			/tar ID ${gl_asstid}
			/delay 1
			/stick ID ${gl_asstid} ${gl_assdis}
			/attack on

			/delay 1s

			/return 1
		}
	}

	/echo

	/return 0
}

sub Check_Auto_Buffs() {
	
	/if (!${buftmr}) {

		/echo Auto :: Requesting buffs.

		/varset buftmr 30m

		/bc buffs on ${Me.ID}

		/delay 30s
	}

	/return 0
}

sub Check_Auto_Med() {

	/declare cnctdb 	string 	local 	${NetBots.Client}
	/declare netbot 	string 	local 	"0"
	/declare manpct		int 	local 	0
	/declare i 			int 	local 	0

	/if (${medtng}) {

		/for i 1 to ${NetBots.Counts} 

			/varset netbot ${cnctdb.Arg[${i}]}
			/varset manpct ${NetBots[${netbot}].PctMana}

			/if (${manpct} != 0 && ${manpct} < ${endmed}) {

				/return 1
			}

		/next i

		/echo Auto :: Ending meditation.
		/varset medtng false
	
	} else {

		/for i 1 to ${NetBots.Counts} 

			/varset netbot ${cnctdb.Arg[${i}]}
			/varset manpct ${NetBots[${netbot}].PctMana}

			/if (${manpct} != 0 && ${manpct} < ${begmed}) {

				/echo Auto :: Beginning meditation.

				/varset medtng true
				/return 1
			}

		/next i
	} 

	/return 0
}

sub Check_Auto_Target() {
			
	/declare 	id	int 	local 0
	/declare  	cnt	int 	local 2
	/declare 	dis	float 	local 0.0

	:AcquireTarget

	/if (${NearestSpawn["NPC"].Distance3D} > ${gl_agrdis}) {
	
		/echo ${cnt}

		/varset id 	${NearestSpawn[${cnt},"NPC"].ID}

		/tar ID ${id}
		/delay 1

		/if (${Target.DistanceZ} > 20.0) {

			/echo Auto :: Target is on another plane.  Switching targets.

			/varcalc cnt ${cnt} + 1

			/goto :AcquireTarget
		}

		/echo Auto :: Target ${id} valid; Attempting to connect...

		/varset dis ${Target.Distance3D}

		/stick ID ${id} ${gl_assdis}		

		/delay 5

		/echo TD : ${Target.Distance} : Saved Dis : ${dis}

		/if (${Target.Distance3D} >= ${dis})  {

			/echo Auto :: Trouble getting to target.  Switching targets.

			/varcalc cnt ${cnt} + 1

			/goto :AcquireTarget
		}
	}

	/return 
}

#event Auto "<#*#> auto"
sub Event_Auto(string line) {

	/if (!${atomat}) {

		/varset atomat true

		/if (${Me.Name.Equal[${pckldr}]}) {

			/bc follow ${Me.ID}
		}

		/if (${gl_shdmed}) /varset gl_ismedg true

		/echo Automation enabled.
		
	} else {

		/varset atomat 		false

		/varset gl_incmbt 	false
		/varset gl_asstid 	0

		/echo Automation disabled.
	}

	/return
}
