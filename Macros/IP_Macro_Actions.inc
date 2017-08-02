
sub Check_Actions() {

	/call "Check_Attack"
	/call "Check_Pet_Attack"
	/call "Check_Follow"
	/call "Check_Med"
	/call "Check_Combat"
	/call "Check_Loot"

	/call "Check_Zone"
	/if (${Macro.Return}) /return

	/if (${Me.Moving}) /return

	/call "Check_Group_Heal"
	/if (${Macro.Return}) /return

	/call "Check_Complete_Heal"
	/if (${Macro.Return}) /return

	/call "Check_Target_Heal"
	/if (${Macro.Return}) /return

	/call "Check_HoT"
	/if (${Macro.Return}) /return
		
	/call "Check_Constant_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_Cannibalize"
	/if (${Macro.Return}) /return

	/call "Check_Pet_Summon"
	/if (${Macro.Return}) /return

	/call "Check_Pet_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_Debuffs"
	/if (${Macro.Return}) /return
	
	/call "Check_Nuke"
	/if (${Macro.Return}) /return	
	
	/call "Check_Yes"
	/if (${Macro.Return}) /return	

	/return
}

sub Check_Attack() {
	
	/if (${Me.Name.Equal[${gl_asstpc}]}) {

		/if (${Target.ID} && ${Target.Distance} < ${gl_lshdis}) {

			/if (${NetBots[${gl_asstpc}].Attacking}) {

				/declare abl 	string	local 
				/declare i 		int 	local

				/for i 1 to ${gl_nmabls}

					/varset abl ${gl_cbtabs[${i}]}

					/if (${Me.AbilityReady[${abl}]}) /doability ${abl}

				/next i
			}
		}

	} else /if (${gl_asstid} != 0) { 

		/if (!${Spawn[ID ${gl_asstid}].ID} || ${Spawn[ID ${gl_asstid}].Type.Equal["Corpse"]}) {

			/varset gl_asstpc 0
			/varset gl_asstid 0
			/stick off
			/attack off

			/return
		}

		/if (${gl_ismele}) {

			/tar ID ${gl_asstid}
			/delay 1

			/if (${gl_shdsht}) {
		
				/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_asstid}) {

					/stick ID ${gl_asstid} moveback ${gl_rngdis}	
				}
			
				/if (${Me.RangedReady})	/ranged
		
			} else {

				/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_asstid}) {

					/stick ID ${gl_asstid} moveback ${gl_assdis} ${gl_assdir}
					/attack on
				}

				/declare abl 	string	local 
				/declare i 		int 	local

				/for i 1 to ${gl_nmabls}

					/varset abl ${gl_cbtabs[${i}]}

					/if (${Me.AbilityReady[${abl}]}) /doability ${abl}

				/next i
			}
		
		} else {

			/stick off
		}
	}
	
	/return
}

sub Check_Pet_Attack() {
	
	/if (${Me.Pet.ID}) {
		
		/if (${gl_pettid} != ${gl_asstid}) {
		
			/if (${Me.Pet.Distance} < ${gl_lshdis}) {

				/pet back off

				/varset gl_pettid ${gl_asstid}
				/tar ID ${gl_pettid}
				/delay 1

				/pet attack
			}
		}
	}

	/return
}

sub Check_Follow() {
	
	/if (${gl_asstid} == 0) {

		/if (${gl_isfwlg}) {

			/if (${Spawn[ID ${gl_fwlgid}].ID}) {

				/if (${Spawn[ID ${gl_fwlgid}].Distance} < ${gl_comdis}) {

					/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_fwlgid}) {

						/stick ID ${gl_fwlgid} ${gl_foldis}
					}
					
				} else {

					/bc I'm too far away to follow.

					/varset gl_isfwlg false
					/varset gl_fwlgid 0

					/stick off
				}

			} else {

				/bc My follow target has zoned.

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

		/if (${Stick.Stopped} || !${Stick.Active}) {

			/if (!${Me.Sitting} && !${Me.Moving}) {

				/if (!${Corpse.Open} && ${Me.SpellReady[1]}) {

					/sit 
				}
			}

		} else /if (!${Me.Standing}) {

			/stand
		}	
	}

	/return
}

sub Check_Combat() {

	/declare cncbts 	string 	local 	${NetBots.Client}
	/declare netbot 	string 	local 	0
	/declare i 			int 	local

	/for i 1 to ${NetBots.Counts} 
		
		/varset netbot ${cncbts.Arg[${i}]}

		/if (${Spawn[PC ${netbot}].ID} && ${Spawn[PC ${netbot}].Distance} < ${gl_comdis}) {

			/if (${NetBots[${netbot}].CombatState} == 0) {

				/varset gl_incmbt true

				/return
			} 
		}

	/next i

	/varset gl_incmbt false

	/return 
}

sub Check_Loot() {

	/if (${gl_rezflg}) {

		/call Event_Loot
	}

	/return
}

sub Check_Zone() {
	
	/if (${gl_curzon.NotEqual[${Zone.Name}]}) {

		/varset gl_curzon ${Zone.Name}
		/varset gl_zontmr 5s
		/varset gl_asstid 0
		/varset gl_incmbt false

		/attack off

		/if (${gl_iscstr}) {

			/loadspells ${gl_splset}
		}

		/if (${Me.Class.Name.Equal["Bard"]}) {

			/squelch /twist 2 3 4 5 6
		}
	}

	/if (${gl_zontmr}) {

		/return 1
	}

	/return 0
}

sub Check_Group_Heal() {
	
	/if (${Bool[${gl_ghlspl}]}) {
		
		/if (${Me.CurrentMana} < ${Spell[${gl_ghlspl}].Mana} + 100) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	0
		/declare helcnt 	int 	local	0
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/varset netbot ${cncbts.Arg[${i}]}

			/if (${Spawn[PC ${netbot}].ID} && ${Spawn[PC ${netbot}].Distance} < ${gl_ghldis}) {

				/if (${NetBots[${netbot}].InGroup}) {
					
					/if (${NetBots[${netbot}].PctHPs} < ${gl_ghlpct}) {

						/varcalc helcnt ${helcnt} + 1
					}
				}
			}

		/next i

		/if (${helcnt} >= ${gl_nmghtg}) {

			/call Cast ${gl_ghlspl} ${gl_ghlgem} ${Me.ID}

			/return 1
		}
	}

	/return 0
}	

sub Check_Complete_Heal() {

	/if (${Bool[${gl_chlspl}]}) {

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	0
		/declare lwstpc 	int 	local 	100	
		/declare hltgid 	int 	local 	
		/declare i 			int 	local

		/for i 1 to ${NetBots.Counts} 
			
			/varset netbot ${cncbts.Arg[${i}]}

			/if (${Spawn[PC ${netbot}].Class.Name.Equal["Warrior"]}) {
				
				/if (${Spawn[PC ${netbot}].ID} && ${Spawn[PC ${netbot}].Distance} < ${gl_spldis}) {

					/if (${NetBots[${netbot}].PctHPs} < ${lwstpc}) {

						/varset lwstpc ${NetBots[${netbot}].PctHPs}
						/varset hltgid ${NetBots[${netbot}].ID}
					}
				}
			}

		/next i

		/if (${lwstpc} < ${gl_chlpct}) {

			/call Cast ${gl_chlspl} ${gl_chlgem} ${hltgid}

			/return 1
		}
	}

	/return 0
}

sub Check_Target_Heal() {

	/if (${Bool[${gl_thlspl}]}) {

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	0
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

		/if (${lwstpc} < ${gl_thlpct}) {

			/call Cast ${gl_thlspl} ${gl_thlgem} ${hltgid}

			/return 1
		}
	}

	/return 0
}

sub Check_HoT() {

	/if (${Bool[${gl_hotspl}]}) {

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare hotsid 	string 	local 	${Spell[${gl_hotspl}].ID}
		/declare netbot 	string 	local 	0
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

sub Check_Constant_Buffs() {

	/if (${gl_nmcsbf} > 0 && !${Me.Moving}) {

		/declare bufspl string 	local
		/declare bufgem string 	local 
		/declare buftgt string 	local
		/declare buffid string 	local
		/declare i 		int 	local

		/for i 1 to ${gl_nmcsbf}

			/varset bufspl ${gl_cstbfs[${i},1]}
			/varset bufgem ${gl_cstbfs[${i},2]}
			/varset buftgt ${gl_cstbfs[${i},3]}
			/varset buffid ${Spell[${bufspl}].ID}

			/if (${Spawn[PC ${buftgt}].ID} && ${Spawn[PC ${buftgt}].Distance} < ${gl_spldis}) {

				/if (!${NetBots[${buftgt}].Buff.Find[${buffid}]}) {
				
					/call Cast ${bufspl} ${bufgem} ${Spawn[PC ${buftgt}].ID}

					/if (${Macro.Return}) /return 1
				} 
			}

		/next i
	}

	/return	0
}

sub Check_Cannibalize() {

	/if (${gl_asstid} != 0) {

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
	}
		
	/return 0
}

sub Check_Pet_Summon() {

	/if	(${Bool[${gl_petspl}]}) {
		
		/if (!${Me.Pet.ID}) {

			/call Cast ${gl_petspl} ${gl_petgem} ${Me.ID}

			/varset gl_pettid 0

			/pet taunt off

			/return 1
		}
	}

	/return 0
}

sub Check_Pet_Buffs() {

	/if (${gl_nmptbf} > 0 && ${Me.Pet.ID}) {

		/declare bufspl string 	local
		/declare bufgem string 	local 
		/declare buftgt string 	local
		/declare buffid string 	local
		/declare i 		int 	local
		
		/for i 1 to ${gl_nmcsbf}

			/varset bufspl ${gl_cstbfs[${i},1]}
			/varset bufgem ${gl_cstbfs[${i},2]}
			/varset buftgt ${gl_cstbfs[${i},3]}
			/varset buffid ${Spell[${bufspl}].ID}
	
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

sub Check_Debuffs() {
	
	/return 0
}

sub Check_Nuke() {
	
	/if (!${gl_dmgtmr} && ${Bool[${gl_nukspl}]}) {

		/if (${gl_asstid} != 0) {
			
			/if (${Spawn[ID ${gl_asstid}].Type.Equal["Corpse"]}) {

				/varset gl_asstid 0
				/attack off

				/return 0
			}
			
			/if (${Me.SpellReady[${gl_nukspl}]}) {

				/call Cast ${gl_nukspl} ${gl_nukgem} ${gl_asstid}

				/return 1
			}
		}
	}

	/return 0
}

sub Check_Yes() {

	/if (${Window[ConfirmationDialogBox].Open}) {

		/notify ConfirmationDialogBox CD_Yes_Button leftmouseup
		/varset gl_rezflg 1
	}

	/return 0
}