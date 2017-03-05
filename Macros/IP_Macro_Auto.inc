
sub Setup_Auto() {
	
	/declare buftmr	timer 	outer 30m

	/declare pckldr string 	outer "Hrelgar"

	/declare begmed int 	outer 20
	/declare endmed int 	outer 90
	/declare actrgt int 	outer 1
	/declare cyccnt int 	outer 0
	/declare tgtcyc int 	outer 5
	/declare agrdis int 	outer 30

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

	/if (${Spawn[ID ${nrstid}].Distance} < ${agrdis}) {

		/if (${Target.ID}) {

			/if (${Target.ID} != ${gl_asstid}) {
				
				/echo Auto :: Target was first to attack me.
					
				/varset gl_asstid ${Target.ID}
				/varset gl_isastg true

				/bc assist on ${Target.ID}
			}

			/tar ID ${gl_asstid}
			/stick ID ${gl_asstid} ${gl_assdis}
			/attack on

			/varset actrgt 1
			/varset cyccnt 0

			/return 1
		
		} else {
		
			/if (${nrstid} != ${gl_asstid}) {

				/echo Auto :: Found target in camp.

				/varset gl_asstid ${nrstid}
				/varset gl_isastg true

				/bc assist on ${gl_asstid}

				/tar ID ${gl_asstid}
				/stick ID ${gl_asstid} ${gl_assdis}
				/attack on

				/varset actrgt 1
				/varset cyccnt 0

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
	/declare manpct		int 	local 	0
	/declare i 			int 	local 	0

	/if (${medtng}) {

		/for i 1 to ${NetBots.Counts} 

		/varset manpct ${NetBots[${cnctdb.Arg[${i}]}].PctMana}

		/if (${manpct} != 0 && ${manpct} < ${endmed}) {

			/return 1
		}

		/next i

		/echo Auto :: Ending meditation.
		/varset medtng false
	
	} else {

		/for i 1 to ${NetBots.Counts} 

		/varset manpct ${NetBots[${cnctdb.Arg[${i}]}].PctMana}

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
	
	/echo Auto :: Moving to target...

	/declare id int local 0

	/if (${NearestSpawn["NPC"].Distance} > ${agrdis}) {

		/varset id ${NearestSpawn[${actrgt},"NPC"].ID}

		/tar ID ${id}

		/stick ID ${id} ${gl_assdis}

		/delay 1s

		/stick off

		/varcalc cyccnt ${cyccnt} + 1

		/if (${cyccnt} >= ${tgtcyc}) {

			/echo Auto :: Switching move targets.

			/varset cyccnt 0
			/varcalc actrgt ${actrgt} + 1
		
		} else /if (${Spawn[ID ${id}].ConColor.NotEqual["BLUE"]}) {

			/echo Auto :: Target is undesirable.

			/varcalc actrgt ${actrgt} + 1
			/return
		}
	}

	/return 
}

#event Auto "<#*#> auto"
sub Event_Auto(string line) {

	/if (!${atomat}) {

		/varset atomat true
		/echo Automation enabled.


		/if (${Me.Name.Equal[${pckldr}]}) {

			/if (!${fwlgid}) /bc follow ${Me.ID}
			/if (!${ismedg}) /bc med
		}
		
	} else {

		/varset atomat false
		/echo Automation disabled.
	}

	/return
}