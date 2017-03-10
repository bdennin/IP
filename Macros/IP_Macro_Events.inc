
sub Check_Events() {

	/doevents Accept_Group
	/doevents Accept_Raid
	/doevents Assist
	/doevents Buff
	/doevents Disband
	/doevents End_Enrage
	/doevents End_Follow
	/doevents End_Macro
	/doevents Follow
	/doevents Character_Flag
	/doevents Gate
	/doevents Loot
	/doevents Med
	/doevents Start_Enrage
	/doevents Take_Damage
	/doevents Speak
	/doevents Warp

	/return
}

#event Accept_Group "#*# invites you to join a group."
sub Event_Accept_Group(string line) {

	/keypress esc

	/invite

	/return
}

#event Accept_Raid "#*# invites you to join a raid. #*#"
sub Event_Accept_Raid(string line) {

	/raidaccept

	/return
}

#event Assist "<#1#> assist on #2#"
sub Event_Assist(string line, string sender, int ID) {
	
	/if (${Spawn[${sender}].ID} == ${Me.ID}) /return

	/if (${Spawn[PC ${sender}].ID} && ${Spawn[${sender}].Distance} < ${gl_comdis}) {

		/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

			/if (${Spawn[ID ${ID}].Type.NotEqual["NPC"]}) /return

			/varset gl_asstid ${ID}
			/varset gl_isastg true

			/if (${gl_isfwlg}) /stick off
		}
	} 

	/return
}

#event Buff "<#1#> buffs on #2#"
sub Event_Buff(string line, string sender, int ID) {
	
	/if (${gl_nmtgbf} == 0) /return

	/if (${Spawn[PC ${sender}].ID} && ${Spawn[${sender}].Distance} < ${gl_comdis}) {

		/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

			/bc Buffing ${Spawn[ID ${ID}].Name}.

			/declare i int local

			/if (${gl_isfwlg}) /afollow pause

			/for i 1 to ${gl_nmtgbf}

				:WaitMana

				/if (${Me.CurrentMana} < ${Spell[${gl_tgtbfs[${i},1]}].Mana} + 300) {

					/if (!${Me.Sitting}) /sit
					/delay 6s
					/goto :WaitMana
				}

				/call Cast ${gl_tgtbfs[${i},1]} ${gl_tgtbfs[${i},3]} ${ID}

			/next i

			/bc Done buffing ${Spawn[ID ${ID}].Name}.

			/if (${gl_isfwlg}) /afollow unpause
		}
	} 

	/return
}

#event Character_Flag "#*# receive a character flag!"
sub Event_Character_Flag(string line) {

	/bc I received a character flag!

	/return
}

#event Disband "#*# disband"
sub Event_Disband(string line) {

	/if (${Raid.Members}) /raiddisband

	/if (${Group.Members}) /disband

	/return
}

#event End_Enrage "#*# is no longer enraged."
sub Event_End_Enrage(string line) {
	
	/if (${gl_ismele}) /attack on

	/return
}

#event End_Follow "<#1#> end follow"
sub Event_End_Follow(string line, string sender) {
	
	/if (${Spawn[${sender}].ID}) {

		/varset gl_isfwlg false
		/varset gl_fwlgid 0
	
		/stick off
	}

	/return
}

#event End_Macro "#*# seconds to prepare your camp."
sub Event_End_Macro(string line) {

	/endmacro

	/return
}

#event Follow "#*# follow #1#"
sub Event_Follow(string line, int ID) {

	/if (${Me.ID} == ${ID}) /return 

	/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

		/interrupt

		/varset gl_isfwlg true
		/varset gl_fwlgid ${ID}

		/stick ID ${gl_fwlgid} ${gl_foldis}
	}

	/return
}

#event Gate "<#*#> gate"
sub Event_Gate(string line) {

	/if (${Me.AltAbilityReady[Origin]}) {
		
		/interrupt

		/aa act origin

		/delay 10s
	}

	/return
} 

#event Loot "<#*#> loot"
sub Event_Loot(string line) {
	
	:LootCorpse 

	/if (${SpawnCount[Corpse ${Me.Name}]} > 0) {
			
		/if (${NearestSpawn[Corpse ${Me.Name}].Distance} < ${gl_spldis}) {

			/tar ID ${NearestSpawn[Corpse ${Me.Name}].ID}

			/delay 1

			/corpse

			/loot

			/keypress esc

			/delay 1s

			/goto :LootCorpse
		}
	}
	
	/return
}

#event Med "<#*#> med"
sub Event_Med(string line) {

	/if (${gl_shdmed}) {
		
		/if (${gl_ismedg}) {

			/stand
		
			/varset gl_ismedg false

			/bc I'm no longer meditating.

		} else {

			/varset gl_ismedg true

			/bc I'm meditating.
		}
	}
	
	/return
}

#event Speak "<#*#> speak #1# #2#"
sub Event_Speak(string line, int ID, string message) {	

	/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

		:MoveToTarget

		/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} > ${gl_spkdis}) {

			/moveto ID ${ID}
			/delay 5

			/goto :MoveToTarget
		}

		/tar ID ${ID}
		
		/delay 1

		/hail
		/say ${message}	
	}

	/return
}

#event Start_Enrage "#*# has become ENRAGED."
sub Event_Start_Enrage(string line) {
	
	/if (${gl_istank}) /attack off

	/return
} 

#event Take_Damage "#1# YOU for #*# points of damage."
sub Event_Take_Damage(string line) {

	/if (${Me.Class.Name.Equal["Monk"]}) {

		/if (${Me.AbilityReady["Feign Death"]}) {

			/doability "Feign Death"
			/delay 5
			/stand

			/if (${Target.ID} && ${gl_isastg}) /attack on
		}
	}

	/varset gl_dmgtmr 12s

	/return
}

#event Warp "<#1#> warp to #2#"
sub Event_Warp(string line, string sender, int ID) {

	/if (${Spawn[PC ${sender}].ID} == ${Me.ID}) /return

	/if (${Spawn[PC ${sender}].ID}) {

		/if (${Spawn[ID ${ID}].ID}) {

			:WarpLoop

			/if (${Spawn[ID ${ID}].Distance} > ${gl_wrpdis}) {

				/interrupt

				/tar ID ${ID}
				/delay 1
				/warp t

				/goto :WarpLoop
			}
		}
	}

	/return
}
