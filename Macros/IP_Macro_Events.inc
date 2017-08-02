
sub Check_Events() {
	
	/doevents AA_Percent
	/doevents Accept_Group
	/doevents Accept_Raid
	/doevents Assist
	/doevents Buff
	/doevents Character_Flag
	/doevents Click
	/doevents Disband
	/doevents End_Enrage
	/doevents End_Macro
	/doevents Follow
	/doevents Gate
	/doevents Loot
	/doevents Med
	/doevents Rez
	/doevents Speak
	/doevents Start_Enrage
	/doevents Stop
	/doevents Summon_Pet
	/doevents Take_Damage
	/doevents Warp

	/return
}

#event AA_Percent "<#*#> aa #1#"
sub Event_AA_Percent(string line, int percent) {

	/squelch /alt on ${percent}

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

	/if (${Spawn[PC ${sender}].ID} && ${Spawn[${sender}].Distance} < ${gl_comdis}) {

		/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

			/if (${Spawn[ID ${ID}].Type.NotEqual["NPC"]}) /return

			/varset gl_asstpc ${sender}
			/varset gl_asstid ${ID}
			/varset gl_incmbt true
		}
	} 

	/return
}

#event Buff "<#1#> buffs on #2#"
sub Event_Buff(string line, string sender, int ID) {
	
	/if (${gl_nmcmbf} == 0) /return

	/if (${Spawn[PC ${sender}].ID} && ${Spawn[${sender}].Distance} < ${gl_comdis}) {

		/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

			/bc Buffing ${Spawn[ID ${ID}].Name}.

			/declare i int local

			/for i 1 to ${gl_nmcmbf}

				:WaitMana

				/if (${Me.CurrentMana} < ${Spell[${gl_cmdbfs[${i},1]}].Mana} + 300) {

					/if (!${Me.Sitting}) /sit
					/delay 6s
					/goto :WaitMana
				}

				/call Cast ${gl_cmdbfs[${i},1]} ${gl_cmdbfs[${i},2]} ${ID}

			/next i

			/bc Done buffing ${Spawn[ID ${ID}].Name}.
		}
	} 

	/return
}

#event Character_Flag "#*# receive a character flag!"
sub Event_Character_Flag(string line) {

	/bc I received a character flag!

	/return
}

#event Click "#*# click"
sub Event_Click(string line) {
	
	/declare i 		int local
	/declare x 		int local
	/declare y 		int local

	/for i 1 to 100 

		/varcalc x ${Math.Rand[3840]} + 1
		/varcalc y ${Math.Rand[2160]} + 1

		/click left ${x} ${y}

	/next i 

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

#event End_Macro "#*# seconds to prepare your camp."
sub Event_End_Macro(string line) {

	/endmacro

	/return
}

#event Follow "#*# follow #1#"
sub Event_Follow(string line, int ID) {

	/if (${Me.ID} == ${ID}) {

		/return 
	}

	/if (${Spawn[ID ${ID}].ID} && ${Spawn[ID ${ID}].Distance} < ${gl_comdis}) {

		/varset gl_isfwlg true
		/varset gl_fwlgid ${ID}

		/varset gl_incmbt false
		/varset gl_asstid 0

		/interrupt

		/attack off

		/stick ID ${gl_fwlgid} ${gl_foldis}
	}

	/return
}

#event Gate "<#*#> gate"
sub Event_Gate(string line) {
	
	/varset gl_isfwlg false
	/varset gl_fwlgid 0
	
	/varset gl_incmbt false
	/varset gl_asstid 0

	/squelch /stick off
	/squelch /twist off
	
	/interrupt

	/delay 2

	/itemnotify 0 rightmouseup
	/delay 11s
	
	/return
} 

#event Loot "<#*#> loot"
sub Event_Loot(string line) {

	/if (${SpawnCount[Corpse ${Me.Name}]} > 0) {
			
		/if (${NearestSpawn[Corpse ${Me.Name}].Distance} < ${gl_spldis}) {


			| LW_LootAllButton
			/declare i 		int local
			/declare numitm int local	
			/declare count 	int local

			:LootCorpse

			/tar ID ${NearestSpawn[Corpse ${Me.Name}].ID}

			/delay 5

			/corpse

			/loot

			/delay 10

			/varset numitm ${Corpse.Items}

			/for i 1 to ${numitm} 

				:LootItem

				/if (!${Corpse.Open}) /goto :LootCorpse

				/varset count 0

				/itemnotify loot${i} rightmouseup
				
				/delay 1

				/if (!${Corpse.Item[${i}].ID}) {

					/varcalc count ${count} + 1

					/if (${count} >= 3) /goto :ItemLooted

				
				} else {

					/goto :LootItem
				}

				/delay 1

				:ItemLooted

			/next i

			/notify LootWnd DoneButton leftmouseup

			/varset gl_rezflg 0
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

#event Rez "<#*#> rez on #1#"
sub Event_Rez(string line, int ID) {
	
	/if (${Me.Class.Name.Equal["Cleric"]}) {

		/if (${Spawn[ID ${ID}].Distance} < ${gl_spldis}) {

			/if (${Spawn[ID ${ID}].Type.Equal["Corpse"]}) {
				
				/tar ID ${ID}
				/delay 2
				/interrupt

				/if (${Bool[FindItem["Holy Symbol of the Prime Healer"]]}) {

					/itemnotify ${FindItem["Holy Symbol of the Prime Healer"].InvSlot} rightmouseup
					/delay 70
				
				} else /if (${Bool[FindItem["Water Sprinkler of Nem Ankh"]]}) {

					/itemnotify ${FindItem["Water Sprinkler of Nem Ankh"].InvSlot} rightmouseup
					/delay 40
				
				} else {

					/cast reviviscence
				}
			}
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

#event Start_Enrage "#1# has become ENRAGED."
sub Event_Start_Enrage(string line, string name) {
	
	/if (${gl_istank}) /attack off

	/return
} 

#event Stop "<#1#> stop"
sub Event_Stop(string line, string sender) {

	/varset gl_isfwlg false
	/varset gl_fwlgid 0
	
	/squelch /stick off
	
	/return 
}

#event Summon_Pet "#*# pet"
sub Event_Summon_Pet(string line) {

	/interrupt 

	/if (${Me.Class.Name.Equal["Bard"]}) /twist off

	/delay 2

	/if (${FindItem["Evolved Red Dragon Egg"].InvSlot}) {

		/itemnotify ${FindItem["Evolved Red Dragon Egg"].InvSlot} rightmouseup	
	
	} else /if (${FindItem["Red Dragon Egg"].InvSlot}) {

		/itemnotify ${FindItem["Red Dragon Egg"].InvSlot} rightmouseup	
	}
	
	/delay 16s

	/if (${Me.Class.Name.Equal["Bard"]}) /twist 2 3 4 5 6

	/return
}

#event Take_Damage "#1# YOU for #*# points of damage."
sub Event_Take_Damage(string line) {

	/if (${Me.Class.Name.Equal["Monk"]}) {

		/if (${Me.AbilityReady["Feign Death"]}) {

			/doability "Feign Death"
			/delay 5
			/stand

			/if (${Target.ID} && ${gl_asstid} != 0) /attack on
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

			/if (${Spawn[ID ${ID}].Distance3D} > ${gl_wrpdis}) {

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
