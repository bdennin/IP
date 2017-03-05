
sub Check_Actions() {

	/call "Check_Follow"
	/call "Check_Med"
	/call "Check_Zone"
	/call "Check_Combat"

	/if (${gl_zontmr}) {
		/return
	}

	/call "Check_Heals"
	/if (${Macro.Return}) /return

	/call "Check_Quick_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_Pets"
	/if (${Macro.Return}) /return

	/call "Check_Assist"
	/if (${Macro.Return}) /return

	/call "Check_Cannibalize"
	/if (${Macro.Return}) /return

	/return
}

sub Check_Follow() {
	
	/if (${gl_isfwlg}) {

		/if (!${gl_isastg}) {

			/if (${SpawnCount[ID ${gl_fwlgid}]} > 0) {
			
				/if (${Spawn[ID ${gl_fwlgid}].Distance} > ${gl_lshdis}) {

					/stick ID ${gl_fwlgid} ${gl_foldis}
				}
			
			} else {

				/varset gl_isfwlg false
				/varset gl_fwlgid 0

				/stick off
			}
		}
	}

	/return
}

sub Check_Med() {
	
	/if (${gl_ismedg}) {
		
		/if (${gl_dmgtmr}) {

			/if (${Me.Sitting}) /stand

			/return
		}

		/if (!${Me.Sitting} && ${Bool[${Cast.Ready}]} && !${Me.Moving}) /sit

		/if (${gl_isfwlg} && ${Spawn[ID ${gl_fwlgid}].Distance} > ${gl_foldis}) {

			/stick ID ${gl_fwlgid} ${gl_foldis}
		}
	}

	/return
}

sub Check_Zone() {
	
	/if (${gl_curzon.NotEqual[${Zone.Name}]}) {

		/varset gl_zontmr 0s
		/varset gl_curzon ${Zone.Name}

		/if (${gl_iscstr}) /loadspells ${gl_splset}
	}

	/return
}

sub Check_Combat() {

	/declare cnctdb 	string 	local 	${NetBots.Client}
	/declare i 			int 	local

	/for i 1 to ${NetBots.Counts} 
		
		/if (${NetBots[${cnctdb.Arg[${i}]}].CombatState} == 0) {

			/varset gl_isastg true

			/return
		} 
		
	/next i

	/varset gl_isastg false
	/varset gl_asstid 0

	/return 
}

sub Check_Heals() {

	/call "Check_Group_Heals"
	/if (${Macro.Return}) /return 1

	/call "Check_Target_Heals"
	/if (${Macro.Return}) /return 1

	/call "Check_HoTs"
	/if (${Macro.Return}) /return 1

	/return 0
}

sub Check_Group_Heals() {
	
	/if (${Bool[${gl_ghlspl}]}) {

	}

	/return 0
}	

sub Check_Target_Heals() {

	/if (${Bool[${gl_thlspl}]}) {

		/if (${Me.CurrentMana} < ${Spell[${gl_thlspl}].Mana}) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare lwstpc 	int 	local 	100	
		/declare hltgid 	int 	local 	
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/if (${Spawn[ID ${NetBots[${cncbts.Arg[${i}]}].ID}].Distance} < ${gl_spldis}) {

				/if (${NetBots[${cncbts.Arg[${i}]}].PctHPs} < ${lwstpc}) {

					/varset lwstpc ${NetBots[${cncbts.Arg[${i}]}].PctHPs}
					/varset hltgid ${NetBots[${cncbts.Arg[${i}]}].ID}
				}
			}

		/next i

		/if (${lwstpc} < ${gl_helpct}) {

			/call Cast ${gl_thlspl} ${gl_helgem} ${hltgid}

			/return 1
		}
	}

	/return 0
}

sub Check_HoTs() {

	/if (${Bool[${gl_hotspl}]}) {

		/if (${Me.CurrentMana} < ${Spell[${gl_hotspl}].Mana}) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare hotsid 	string 	local 	${Spell[${gl_hotspl}].ID}
		/declare lwstpc 	int 	local 	100	
		/declare hltgid 	int 	local 	
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/if (${Spawn[ID ${NetBots[${cncbts.Arg[${i}]}].ID}].Distance} < ${gl_spldis}) {

				/if (${NetBots[${cncbts.Arg[${i}]}].PctHPs} < ${lwstpc}) {

					/if (!${NetBots[${cncbts.Arg[${i}]}].ShortBuff.Find[${hotsid}]}) {
				
						/varset lwstpc ${NetBots[${cncbts.Arg[${i}]}].PctHPs}
						/varset hltgid ${NetBots[${cncbts.Arg[${i}]}].ID}
					}
				}
			}

		/next i

		/if (${lwstpc} < ${gl_hotpct}) {

			/call Cast ${gl_hotspl} ${gl_hotgem} ${hltgid}

			/return 1
		}
	}
	
	/return 0
}

sub Check_Quick_Buffs() {

	/if (${gl_nmqkbf} > 0 && !${Me.Moving}) {

		/declare bufspl string 	local 
		/declare buftgt string 	local
		/declare bufgem string 	local
		/declare buffid string 	local
		/declare i 		int 	local

		/for i 1 to ${gl_nmqkbf}

			/varset bufspl ${gl_qkbufs[${i},1]}
			/varset buftgt ${gl_qkbufs[${i},2]}
			/varset bufgem ${gl_qkbufs[${i},3]}
			/varset buffid ${gl_qkbufs[${i},4]}

			/if (${Spawn[${buftgt}].ID} && ${Spawn[${buftgt}].Distance} < ${gl_spldis}) {
			
				/if (!${NetBots[${buftgt}].Buff.Find[${buffid}]}) {
				
					/call Cast ${bufspl} ${bufgem} ${Spawn[${buftgt}].ID}

					/if (${Macro.Return}) /return 1
				} 
			}

		/next i
	}

	/return	0
}

sub Check_Pets() {
	
	/if (${Bool[${gl_petspl}]}) {

		/call "Check_Pet_Summon"
		/if (${Macro.Return}) /return 1

		/call "Check_Pet_Buffs"
		/if (${Macro.Return}) /return 1
	}

	/return 0
}

sub Check_Pet_Summon() {

	/if (!${Me.Pet.ID}) {

		/call Cast ${gl_petspl} ${gl_petgem} ${Me.ID}
		/return 1
	}

	/return 0
}

sub Check_Pet_Buffs() {

	/if (${Bool[${gl_petbuf}]} && ${Me.Pet.ID}) {

	}

	/return 0
}

sub Check_Assist() {

	/if (${gl_isastg}) {

		/call "Check_Abilities"

		/call "Check_Pet_Assists"
		
		/call "Check_Debuffs"
		/if (${Macro.Return}) /return 1
		
		/call "Check_Nukes"
		/if (${Macro.Return}) /return 1
	}

	/return 0
}

sub Check_Abilities() {
	
	/if (${gl_ismele}) {

		/declare abl 	string	local 
		/declare i 		int 	local

		/for i 1 to ${gl_nmabls}

			/varset abl ${gl_cbtabl[${i}]}

			/if (${Me.AbilityReady[${abl}]}) /doability ${abl}

		/next i
	}

	/return
}

sub Check_Pet_Assists() {

	/if (${gl_pettid} != ${gl_asstid}) {

		/if (!${Spawn[Corpse ID ${gl_pettid}].ID}) {

			/pet back off
		}

		/varset gl_pettid ${gl_asstid}
		/tar ID ${gl_pettid}

		/pet attack
	}

	/return 
}

sub Check_Debuffs() {
	
	/return 0
}

sub Check_Nukes() {
	
	/if (${Bool[${gl_nukspl}]}) {

		/if (${Me.SpellReady[${gl_nukspl}]}) {

			/call Cast ${gl_nukspl} ${gl_nukgem} ${gl_asstid}

			/return 1
		}
	}

	/return 0
}

sub Check_Cannibalize() {
	
	/if (${Me.Class.Name.NotEqual["Shaman"]}) /return 0

	/if (${gl_isastg} && ${Me.PctMana} < 90) {

		/if (${Me.SpellReady["Ancient: Chaotic Pain"]}) {

			/call Cast "Ancient: Chaotic Pain" 9 ${Me.ID}

			/return 1
		}
	}

	/return 0
}