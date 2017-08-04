
sub Setup_Auto() {
	
	/declare unrtgs[2000] bool outer false

	/declare pckldr string 	outer "Hrelgar"

	/declare buftmr	timer 	outer 30m
	/declare sumtmr timer 	outer 0
	/declare baktmr timer 	outer 0
	/declare rndtmr timer 	outer 0
	/declare rsttmr timer 	outer 1m
	
	/declare lstdis float 	outer 0.0
	/declare agrdis float 	outer 20.0

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

	/if (!${rsttmr}) {

		/varset rsttmr 10m
		/deletevar unrtgs
		/declare unrtgs[2000] bool outer false

		/echo Reseting unreachable targets
	}

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

	/if (${Spawn[ID ${nrstid}].Distance3D} < ${agrdis}) {
			
		/if (${Spawn[ID ${nrstid}].LineOfSight}) {
			
			/if (${nrstid} < 2000 && ${unrtgs[${nrstid}]}) /return 0

			/if (${nrstid} != ${gl_asstid}) {

				/varset gl_asstid ${nrstid}
				/varset gl_incmbt true

				/bc assist on ${gl_asstid}

				/tar ID ${gl_asstid}
				/delay 1
				/stick ID ${gl_asstid} ${gl_assdis}
				/attack on

				/delay 1s

				/return 1

			}  else /if (${gl_asstid} != 0) {

				/if (${Target.ID} != ${gl_asstid}) {
					
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
	}

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
	/declare netbot 	string 	local 	0
	/declare manpct		int 	local 	0
	/declare i 			int 	local 	0

	/if (${medtng}) {

		/for i 1 to ${NetBots.Counts} 

			/varset netbot ${cnctdb.Arg[${i}]}
			/varset manpct ${NetBots[${netbot}].PctMana}

			/if (${NetBots[${netbot}].Class.Name.NotEqual["Bard"]} && ${manpct} != 0 && ${manpct} < ${endmed}) {

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
	/declare  	cnt	int 	local 1
	/declare 	dis	float 	local 0.0

	:AcquireTarget

	/if (${NearestSpawn["NPC"].Distance3D} < ${gl_agrdis}) {
	
		/return
	}

	/varset id 	${NearestSpawn[${cnt},"NPC"].ID}

	/tar ID ${id}
	/delay 1

	/if (${id} < 2000 && ${unrtgs[${id}]}) {
		
		/echo Auto :: Target is branded as unreachable.  Switching targets.

		/varcalc cnt ${cnt} + 1

		/goto :AcquireTarget
	}

	/if (${Target.DistanceZ} > 50.0) {

		/echo Auto :: Target is on another plane.  Switching targets.

		/varcalc cnt ${cnt} + 1

		/goto :AcquireTarget
	}

	/if (${Target.ConColor.NotEqual["LIGHT BLUE"]} && ${Target.ConColor.NotEqual["BLUE"]}) {

		/echo Auto :: Target is too high level.  Switching targets.

		/varcalc cnt ${cnt} + 1

		/goto :AcquireTarget
	}


	/varset dis ${Target.Distance3D}

	/moveto ID ${id}

	/delay 5

	/if (${Target.Distance3D} >= ${dis})  {

		/echo Auto :: Trouble getting to target.  Switching targets.

		/varset unrtgs[${id}] true

		/varcalc cnt ${cnt} + 1

		/goto :AcquireTarget
	}

	/return 
}

#event Auto "<#*#> auto"
sub Event_Auto(string line) {

	/if (!${atomat}) {

		/varset atomat true

		/if (${Me.Name.Equal[${pckldr}]}) {

			/if (!${gl_ismedg}) /call Event_Med

			/call Event_Follow ${Me.ID}
		}

		/echo Automation enabled.
		
	} else {

		/varset atomat 		false
		/varset gl_incmbt 	false
		/varset gl_asstid 	0

		/echo Automation disabled.
	}

	/return
}
