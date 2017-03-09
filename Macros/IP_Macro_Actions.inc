
sub Check_Actions() {

	/call "Check_Follow"
	/call "Check_Med"
	/call "Check_Zone"
	/call "Check_Combat"

	/if (${gl_zontmr}) {
		/return
	}

	/call "Check_Group_Heals"
	/if (${Macro.Return}) /return

	/call "Check_Target_Heals"
	/if (${Macro.Return}) /return

	/call "Check_Quick_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_HoTs"
	/if (${Macro.Return}) /return

	/if	(${Bool[${gl_petspl}]}) {
		
		/call "Check_Pet_Summon"
		/if (${Macro.Return}) /return

		/call "Check_Pet_Buffs"
		/if (${Macro.Return}) /return
	}	

	/if (${gl_isastg} && ${Spawn[ID ${gl_asstid}].ID}) {

		/if (${Bool[${gl_petspl}]}) {

			/call "Check_Pet_Assists"
		}
		
		/call "Check_Attack"

		/call "Check_Abilities"
		
		/call "Check_Cannibalize"
		/if (${Macro.Return}) /return
	
		/call "Check_Debuffs"
		/if (${Macro.Return}) /return
		
		/call "Check_Nukes"
		/if (${Macro.Return}) /return
	}
	
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

	/declare cncbts 	string 	local 	${NetBots.Client}
	/declare netbot 	string 	local 	"0"
	/declare i 			int 	local

	/for i 1 to ${NetBots.Counts} 
		
		/varset netbot ${cncbts.Arg[${i}]}

		/if (${NetBots[${netbot}].CombatState} == 0) {

			/varset gl_isastg true

			/return
		} 
		
	/next i

	/varset gl_isastg false
	/varset gl_asstid 0

	/return 
}

sub Check_Group_Heals() {
	
	/if (${Bool[${gl_ghlspl}]}) {

	}

	/return 0
}	

sub Check_Target_Heals() {

	/if (${Bool[${gl_thlspl}]}) {

		/if (${Me.CurrentMana} < ${Spell[${gl_thlspl}].Mana} + 100) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	"0"
		/declare lwstpc 	int 	local 	100	
		/declare hltgid 	int 	local 	
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/varset netbot ${cncbts.Arg[${i}]}

			/if (${Spawn[PC ${netbot}].ID} && ${Spawn[PC ${netbot}].Distance} < ${gl_spldis}) {

				/if (${NetBots[${netbot}].PctHPs} < ${lwstpc}) {

					/varset lwstpc ${NetBots[${netbot}].PctHPs}
					/varset hltgid ${NetBots[${netbot}].ID}
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

		/if (${Me.CurrentMana} < ${Spell[${gl_hotspl}].Mana} + 100) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare hotsid 	string 	local 	${Spell[${gl_hotspl}].ID}
		/declare netbot 	string 	local 	"0"
		/declare lwstpc 	int 	local 	100	
		/declare hltgid 	int 	local 	
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/varset netbot ${cncbts.Arg[${i}]}

			/if (${Spawn[PC ${netbot}].ID} && ${Spawn[PC ${netbot}].Distance} < ${gl_spldis}) {

				/if (${NetBots[${netbot}].PctHPs} < ${lwstpc}) {

					/if (!${NetBots[${netbot}].ShortBuff.Find[${hotsid}]}) {
				
						/varset lwstpc ${NetBots[${netbot}].PctHPs}
						/varset hltgid ${NetBots[${netbot}].ID}
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

			/varset bufspl ${gl_qckbfs[${i},1]}
			/varset buftgt ${gl_qckbfs[${i},2]}
			/varset bufgem ${gl_qckbfs[${i},3]}
			/varset buffid ${gl_qckbfs[${i},4]}
	
			/if (${Me.CurrentMana} < ${Spell[${bufspl}].Mana} + 100) /return 0

			/if (${Spawn[PC ${buftgt}].ID} && ${Spawn[PC ${buftgt}].Distance} < ${gl_spldis}) {
			
				/if (!${NetBots[${buftgt}].Buff.Find[${buffid}]}) {
				
					/call Cast ${bufspl} ${bufgem} ${Spawn[${buftgt}].ID}

					/if (${Macro.Return}) /return 1
				} 
			}

		/next i
	}

	/return	0
}

sub Check_Pet_Summon() {

	/if (!${Me.Pet.ID}) {

		/if (${Me.CurrentMana} < ${Spell[${gl_petspl}].Mana} + 100) /return 0

		/call Cast ${gl_petspl} ${gl_petgem} ${Me.ID}
		/return 1
	}

	/return 0
}

sub Check_Pet_Buffs() {

	/if (${gl_nmptbf} > 0 && ${Me.Pet.ID}) {

		/declare bufspl string 	local 
		/declare buftgt string 	local
		/declare bufgem string 	local
		/declare buffid string 	local
		/declare i 		int 	local
		
		/for i 1 to ${gl_nmqkbf}

			/varset bufspl ${gl_petbfs[${i},1]}
			/varset buftgt ${gl_petbfs[${i},2]}
			/varset bufgem ${gl_petbfs[${i},3]}
			/varset buffid ${gl_petbfs[${i},4]}
	
			/if (${Me.CurrentMana} < ${Spell[${bufspl}].Mana} + 100) /return 0

			/if (${Me.Pet.ID} && ${Me.Pet.Distance} < ${gl_spldis}) {
			
				/if (!${NetBots[${Me.Name}].PetBuff.Find[${buffid}]}) {
				
					/call Cast ${bufspl} ${bufgem} ${Me.Pet.ID}

					/if (${Macro.Return}) /return 1
				} 
			}

		/next i
	}

	/return 0
}

sub Check_Pet_Assists() {

	/if (${Me.Pet.Distance} > ${gl_lshdis}) /return

	/if (${gl_pettid} != ${gl_asstid}) {
		
		/varset gl_pettid ${gl_asstid}
		/tar ID ${gl_pettid}
		/delay 1

		/pet attack
	}

	/return 
}

sub Check_Attack() {

	/if (${gl_ismele}) {

		/tar ID ${gl_asstid}
		/delay 1

		/stick moveback ID ${gl_asstid} ${gl_assdis} ${gl_assdir}
		/attack on

	} else /if (${gl_isrngd}) {

		/tar ID ${gl_asstid}
		/delay 1

		/stick moveback ID ${gl_asstid} ${gl_rngdis}
		
		/if (${Me.RangedReady})	/ranged
	}

	/if (${Spawn[ID ${gl_asstid}].Type.Equal["Corpse"]}) {

		/varset gl_asstid 0
		/varset gl_isastg false
		/echo tru
	}

	/return
}

sub Check_Abilities() {
	
	/if (${gl_ismele} && ${Target.ID}) {

		/declare abl 	string	local 
		/declare i 		int 	local

		/for i 1 to ${gl_nmabls}

			/varset abl ${gl_cbtabl[${i}]}

			/if (${Me.AbilityReady[${abl}]}) /doability ${abl}

		/next i
	}

	/return
}

sub Check_Debuffs() {
	
	/return 0
}

sub Check_Cannibalize() {

	/if (${gl_iscstr}) {

		/if (${Me.PctMana} < 90 && ${Me.PctHPs} > 75) {
			
			/if (${Me.PctMana} < 60 && ${Me.AltAbilityReady["Cannibalization"]}) {

				/aa act cannibalization

				/delay 3s

				/return 1

			} else /if (${Me.SpellReady["Ancient: Chaotic Pain"]}) {

				/call Cast "Ancient: Chaotic Pain" 9 ${Me.ID}

				/return 1

			} else /if (${FindItem["Manastone"].InvSlot}) {

				/itemnotify ${FindItem["Manastone"].InvSlot} rightmouseup
			}
		}
	}
	
	/return 0
}

sub Check_Nukes() {
	
	/if (${Bool[${gl_nukspl}]}) {
			
		/if (${Me.CurrentMana} < ${Spell[${gl_nukspl}].Mana}) /return 0

		/if (${Me.SpellReady[${gl_nukspl}]}) {

			/call Cast ${gl_nukspl} ${gl_nukgem} ${gl_asstid}

			/return 1
		}
	}

	/return 0
}
