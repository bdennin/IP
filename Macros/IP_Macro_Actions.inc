
sub Check_Actions() {

	/call "Check_Med"
	/call "Check_Follow"
	/call "Check_Combat"
	/call "Check_Attack"
	/call "Check_Zone"

	/if (${gl_zontmr}) {
		/return
	}

	/if (${Me.Moving}) /return

	/call "Check_Group_Heal"
	/if (${Macro.Return}) /return

	/call "Check_Complete_Heal"
	/if (${Macro.Return}) /return

	/call "Check_Target_Heal"
	/if (${Macro.Return}) /return

	/call "Check_Constant_Buffs"
	/if (${Macro.Return}) /return

	/call "Check_HoT"
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
	
	/return
}

sub Check_Attack() {
	
	/if (${gl_incmbt}) {

		/if (!${gl_asstid}) /return

		/if (${Me.Pet.ID}) {
			
			/if (${gl_pettid} != ${gl_asstid}) {
			
				/if (${Me.Pet.Distance} < ${gl_lshdis}) {

					/varset gl_pettid ${gl_asstid}
					/tar ID ${gl_pettid}
					/delay 1

					/pet attack
				}
			}
		}

		/if (${gl_ismele}) {

			/tar ID ${gl_asstid}
			/delay 1

			/attack on

			/if (!${Target.ID} || ${Target.Type.Equal["Corpse"]}) {

				/varset gl_incmbt false
				/varset gl_asstid 0

				/keypress esc

				/return
			}

			/if (${gl_shdsht}) {
			
				/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_asstid})
				{
					/stick moveback ID ${gl_asstid} ${gl_rngdis}
					/tar ID ${gl_asstid}
					/delay 1
				}
				
				/if (${Me.RangedReady})	/ranged
			
			} else {
				
				/echo not act ${!${Stick.Active}}
				/echo not tgt ${${Stick.Active} && ${Stick.StickTarget} != ${gl_asstid}}

				/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_asstid}) {

					/stick moveback ID ${gl_asstid} ${gl_assdis} ${gl_assdir}
				}

				/stick moveback ID ${gl_asstid} ${gl_assdis} ${gl_assdir}
				/attack on

				/declare abl 	string	local 
				/declare i 		int 	local

				/for i 1 to ${gl_nmabls}

					/varset abl ${gl_cbtabs[${i}]}

					/if (${Me.AbilityReady[${abl}]}) /doability ${abl}

				/next i
			}
		}
	}

	/return 
}

sub Check_Combat() {

	/declare cncbts 	string 	local 	${NetBots.Client}
	/declare netbot 	string 	local 	"0"
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

sub Check_Follow() {
	
	/if (${gl_isfwlg} && !${gl_incmbt}) {

		/if (${Spawn[ID ${gl_fwlgid}].ID}) {

			/if (${Spawn[ID ${gl_fwlgid}].Distance} > ${gl_comdis}) {
				
				/bc I'm too far away to follow.

				/varset gl_isfwlg false
				/varset gl_fwlgid 0

				/stick off
			
			} else {

				/if (!${Stick.Active} || ${Stick.Active} && ${Stick.StickTarget} != ${gl_fwlgid}) {

					/stick ID ${gl_fwlgid} ${gl_foldis}
				}
			}

		} else {

			/bc My follow target has zoned.

			/varset gl_isfwlg false
			/varset gl_fwlgid 0

			/stick off
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

				/sit 
			}

		} else /if (!${Me.Standing}) {

			/stand
		}
		
	}

	/return
}

sub Check_Zone() {
	
	/if (${gl_curzon.NotEqual[${Zone.Name}]}) {

		/varset gl_zontmr 0s
		/varset gl_curzon ${Zone.Name}

		/if (${gl_iscstr}) {

			/loadspells ${gl_splset}
		}

		/if (${Me.Class.Name.Equal["Bard"]}) {

			/squelch /twist 1 2 3 4 5
		}
	}

	/return
}

sub Check_Group_Heal() {
	
	/if (${Bool[${gl_ghlspl}]}) {
		
		/if (${Me.CurrentMana} < ${Spell[${gl_ghlspl}].Mana} + 100) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	"0"
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

		/if (${Me.CurrentMana} < ${Spell[${gl_chlspl}].Mana} + 100) /return 0

		/declare cncbts 	string 	local 	${NetBots.Client}
		/declare netbot 	string 	local 	"0"
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

		/if (${lwstpc} < ${gl_thlpct}) {

			/call Cast ${gl_thlspl} ${gl_thlgem} ${hltgid}

			/return 1
		}
	}

	/return 0
}

sub Check_HoT() {

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

			/if (${Me.CurrentMana} < ${Spell[${bufspl}].Mana} + 100) /return 0

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

sub Check_Pet_Summon() {

	/if	(${Bool[${gl_petspl}]}) {
		
		/if (!${Me.Pet.ID}) {

			/if (${Me.CurrentMana} < ${Spell[${gl_petspl}].Mana} + 100) /return 0

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

sub Check_Debuffs() {
	
	/return 0
}

sub Check_Cannibalize() {

	/if (${gl_incmbt}) {

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

sub Check_Nuke() {
	
	/if (!${gl_dmgtmr} && ${Bool[${gl_nukspl}]}) {

		/if (${gl_incmbt}) {
			
			/if (${Me.CurrentMana} < ${Spell[${gl_nukspl}].Mana}) /return 0

			/if (${Me.SpellReady[${gl_nukspl}]}) {

				/call Cast ${gl_nukspl} ${gl_nukgem} ${gl_asstid}

				/return 1
			}
		}
	}

	/return 0
}
