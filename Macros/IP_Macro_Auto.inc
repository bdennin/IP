
sub Setup_Auto() {
	
	/declare pckldr string 	outer "Hrelgar"

	/declare buftmr	timer 	outer 30m
	/declare movtmr timer 	outer 0
	/declare baktmr timer 	outer 0
	/declare rndtmr timer 	outer 0

	/declare begmed int 	outer 20
	/declare endmed int 	outer 90
	/declare acttgt int 	outer 1
	/declare agrdis int 	outer 40

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

	/call "Check_Auto_Danger" 
	/if (${Macro.Return}) /return

	/call "Check_Auto_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_Auto_Med"
	/if (${Macro.Return}) /return

	/call "Check_Auto_Move"

	/return
}

sub Check_Auto_Danger() {

	/declare nrstid int local 

	/varset nrstid ${NearestSpawn["NPC"].ID}

	/if (${Target.ID} && ${Target.Distance} < ${gl_foldis}) {

		/if (${Target.ID} != ${gl_asstid}) {
			
			/echo Auto :: Target was first to attack me.
				
			/varset gl_asstid ${Target.ID}
			/varset gl_isastg true

			/bc assist on ${Target.ID}
		}

		/tar ID ${gl_asstid}
		/delay 1
		/stick ID ${gl_asstid} ${gl_assdis}
		/attack on

		/varset acttgt 1

		/delay 1s

		/return 1
	}

	/if (${Spawn[ID ${nrstid}].Distance} < ${agrdis}) {

		/if (${nrstid} != ${gl_asstid}) {

			/echo Auto :: Found target nearby.

			/varset gl_asstid ${nrstid}
			/varset gl_isastg true

			/bc assist on ${gl_asstid}

			/tar ID ${gl_asstid}
			/delay 1
			/stick ID ${gl_asstid} ${gl_assdis}
			/attack on

			/varset acttgt 1

			/delay 1s

			/return 1
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

sub Check_Auto_Move() {
	
	/if (!${movtmr}) {

		/echo Auto :: Finding target...
		
		/declare 	id int local 0
		
		:AcquireTarget

		/varset 	id ${NearestSpawn[${acttgt},"NPC"].ID}

		/tar ID ${id}
		/delay 1

		/if (${Target.Level} >= ${Me.Level}) {

			/echo Auto :: Target is too powerful. Switching targets.

			/varcalc acttgt ${acttgt} + 1

			/goto :AcquireTarget
		}

		/if (${Target.DistanceZ} > 30) {

			/echo Auto :: Target is on a different plane. Switching targets.

			/varcalc acttgt ${acttgt} + 1

			/goto :AcquireTarget
		}

		/varset movtmr 5s

		/stick ID ${id} ${gl_assdis}		

		/varcalc acttgt ${acttgt} + 1
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

		/varset gl_isastg 	false
		/varset gl_asstid 	0

		/echo Automation disabled.
	}

	/return
}
