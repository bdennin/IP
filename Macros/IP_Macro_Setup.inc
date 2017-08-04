
sub Setup() {

	/call "Setup_Vars"
	/call "Setup_Class"	
	
	/call "Check_Plugins"

	/squelch /tgb on
	/squelch /hidecorpse all
	/squelch /hidecorpse none
	/squelch /hidecorpse looted
	/squelch /netfollow off

	/attack off
	/stick off
	/stand

	/return
}

sub Setup_Vars() {

	/if (!${Defined[gl_fwlnam]}) /declare gl_fwlnam	string 	global	""
	
	/if (!${Defined[gl_fwlgid]}) /declare gl_fwlgid	int 	global	0
	/if (!${Defined[gl_asstid]}) /declare gl_asstid	int 	global	0
	/if (!${Defined[gl_pettid]}) /declare gl_pettid	int 	global	0
	
	/if (!${Defined[gl_incmbt]}) /declare gl_incmbt	bool 	global	0
	/if (!${Defined[gl_isfwlg]}) /declare gl_isfwlg	bool 	global	0
	/if (!${Defined[gl_ismedg]}) /declare gl_ismedg	bool 	global	0
	
	||Internal variables
	/declare gl_setini 	string 	outer 	"Settings\Settings.ini"
	/declare gl_botini 	string 	outer 	"Bots\${MacroQuest.Server}_${Me.Name}.ini"	
	/declare gl_curzon	string 	outer 	0

	/declare gl_dmgtmr	timer  	outer	0s
	/declare gl_zontmr	timer  	outer	0s

	||Ini globals
	/declare gl_rezflg 	bool 	outer

	/declare gl_engpct 	int 	outer

	/declare gl_splset	string	outer

	/declare gl_comdis	float 	outer
	/declare gl_rngdis 	float 	outer
	/declare gl_spldis	float	outer
	/declare gl_ghldis 	float 	outer
	/declare gl_lshdis 	float 	outer
	/declare gl_foldis	float 	outer
	/declare gl_assdis	float 	outer
	/declare gl_spkdis 	float 	outer

	/if (!${Ini[${gl_setini}].Length}) {

		/ini ${gl_setini} "Assists" 	"Engage_Percent" 			"97"

		/ini ${gl_setini} "Spells" 		"Spell_Set_Name" 			"jim"

		/ini ${gl_setini} "Distances" 	"Communication_Distance" 	"500.0"
		/ini ${gl_setini} "Distances" 	"Ranged_Attack_Distance" 	"125.0"
		/ini ${gl_setini} "Distances" 	"Spell_Casting_Distance" 	"100.0"
		/ini ${gl_setini} "Distances" 	"Group_Heal_Distance" 		"50.0"
		/ini ${gl_setini} "Distances" 	"Follow_Leash_Distance" 	"30.0"
		/ini ${gl_setini} "Distances" 	"Follow_Distance" 			"10.0"
		/ini ${gl_setini} "Distances" 	"Assist_Stick_Distance" 	"8.0"
		/ini ${gl_setini} "Distances" 	"Speak_Distance" 			"5.0"
	}

	/varset gl_engpct ${Ini[${gl_setini},"Assists","Engage_Percent"]}

	/varset gl_splset ${Ini[${gl_setini},"Spells","Spell_Set_Name"]}

	/varset gl_comdis ${Ini[${gl_setini},"Distances","Communication_Distance"]}
	/varset gl_rngdis ${Ini[${gl_setini},"Distances","Ranged_Attack_Distance"]}
	/varset gl_spldis ${Ini[${gl_setini},"Distances","Spell_Casting_Distance"]}
	/varset gl_ghldis ${Ini[${gl_setini},"Distances","Group_Heal_Distance"]}
	/varset gl_lshdis ${Ini[${gl_setini},"Distances","Follow_Leash_Distance"]}
	/varset gl_foldis ${Ini[${gl_setini},"Distances","Follow_Distance"]}
	/varset gl_assdis ${Ini[${gl_setini},"Distances","Assist_Stick_Distance"]}
	/varset gl_spkdis ${Ini[${gl_setini},"Distances","Speak_Distance"]}

	/return
}

sub Setup_Class() {
	
	/declare gl_assdir		string 	outer
	/declare gl_ismele		bool 	outer
	/declare gl_ishelr 		bool 	outer
	/declare gl_iscstr		bool 	outer
	/declare gl_istank		bool 	outer
	/declare gl_shdsht 		bool 	outer
	/declare gl_shdmed		bool 	outer
	
	/declare gl_cbtabs[6] 	string	outer
	/declare gl_nmabls		int 	outer
	
	/declare gl_ghlspl 		string 	outer
	/declare gl_ghlgem 		string 	outer
	/declare gl_ghlpct 		int 	outer
	/declare gl_nmghtg 		int 	outer

	/declare gl_chlspl		string 	outer
	/declare gl_chlgem 		string 	outer
	/declare gl_chlpct		int 	outer 	

	/declare gl_thlspl		string 	outer
	/declare gl_thlgem 		string 	outer
	/declare gl_thlpct		int 	outer 	

	/declare gl_hotspl 		string 	outer 	
	/declare gl_hotgem 		string 	outer
	/declare gl_hotpct 		int 	outer
	
	/declare gl_nukspl 		string 	outer
	/declare gl_nukgem 		string 	outer

	/declare gl_petspl 		string 	outer
	/declare gl_petgem 		string 	outer

	/declare gl_debufs[4,3] string 	outer
	/declare gl_nmdebf 		int 	outer

	/declare gl_cstbfs[8,3] string	outer
	/declare gl_nmcsbf		int 	outer

	/declare gl_cmdbfs[4,3] string	outer
	/declare gl_nmcmbf 		int 	outer
	
	/declare gl_petbfs[4,3] string 	outer
	/declare gl_nmptbf 		int 	outer
	
	/if (!${Ini[${gl_botini}].Length}) {
		
		/if (${Me.Class.Name.Equal["Shadow Knight"]}) {

			/call Init_Shadow_Knight
		
		} else {

			/call Init_${Me.Class.Name}
		}
	}

	/declare iter 			string 	local
	/declare i 				int 	local

	/varset gl_assdir ${Ini[${gl_botini},"Control","Assist_Direction"]}
	/varset gl_ismele ${Ini[${gl_botini},"Control","Should_Melee"]}
	/varset gl_ishelr ${Ini[${gl_botini},"Control","Should_Heal"]}
	/varset gl_iscstr ${Ini[${gl_botini},"Control","Should_Cast"]}
	/varset gl_istank ${Ini[${gl_botini},"Control","Should_Tank"]}
	/varset gl_shdsht ${Ini[${gl_botini},"Control","Should_Shoot"]}
	/varset gl_shdmed ${Ini[${gl_botini},"Control","Should_Meditate"]}

	/for i 1 to 6
		
		/varset iter "${Ini[${gl_botini},"Abilities","Ability#${i}"]}"
		
		/if (${Bool[${iter}]}) {

			/varset gl_cbtabs[${i}] ${iter}

			/varset gl_nmabls ${i}
		}

	/next i

	/varset gl_ghlspl "${Ini[${gl_botini},"Group_Heal","Group_Heal_Spell"]}"
	/varset gl_ghlgem "${Ini[${gl_botini},"Group_Heal","Group_Heal_Gem"]}"
	/varset gl_ghlpct ${Ini[${gl_botini},"Group_Heal","Group_Heal_Percent"]}
	/varset gl_nmghtg ${Ini[${gl_botini},"Group_Heal","Group_Heal_Targets"]}

	/varset gl_chlspl "${Ini[${gl_botini},"Complete_Heal","Complete_Heal_Spell"]}"
	/varset gl_chlgem "${Ini[${gl_botini},"Complete_Heal","Complete_Heal_Gem"]}"
	/varset gl_chlpct ${Ini[${gl_botini},"Complete_Heal","Complete_Heal_Percent"]}

	/varset gl_thlspl "${Ini[${gl_botini},"Target_Heal","Target_Heal_Spell"]}"
	/varset gl_thlgem "${Ini[${gl_botini},"Target_Heal","Target_Heal_Gem"]}"
	/varset gl_thlpct ${Ini[${gl_botini},"Target_Heal","Target_Heal_Percent"]}

	/varset gl_hotspl "${Ini[${gl_botini},"Heal_Over_Time","Heal_Over_Time_Spell"]}"
	/varset gl_hotgem "${Ini[${gl_botini},"Heal_Over_Time","Heal_Over_Time_Gem"]}"
	/varset gl_hotpct ${Ini[${gl_botini},"Heal_Over_Time","Heal_Over_Time_Percent"]}
	
	/varset gl_nukspl "${Ini[${gl_botini},"Nuke","Nuke_Spell"]}"
	/varset gl_nukgem "${Ini[${gl_botini},"Nuke","Nuke_Gem"]}"

	/varset gl_petspl "${Ini[${gl_botini},"Pet","Pet_Spell"]}"
	/varset gl_petgem "${Ini[${gl_botini},"Pet","Pet_Gem"]}"

	/for i 1 to 4
		
		/varset iter ${Ini[${gl_botini},"Debuffs","Debuff_Spell#${i}"]}
		
		/if (${Bool[${iter}]}) {

			/varset gl_debufs[${i},1] "${Ini[${gl_botini},"Debuffs","Debuff_Spell#${i}"]}"
			/varset gl_debufs[${i},2] "${Ini[${gl_botini},"Debuffs","Debuff_Gem#${i}"]}"
	
			/varset gl_nmdebf ${i}
		}

	/next i

	/for i 1 to 8
		
		/varset iter ${Ini[${gl_botini},"Constant_Buffs","Constant_Buff_Spell#${i}"]}
	
		/if (${Bool[${iter}]}) {

			/varset gl_cstbfs[${i},1] "${Ini[${gl_botini},"Constant_Buffs","Constant_Buff_Spell#${i}"]}"
			/varset gl_cstbfs[${i},2] "${Ini[${gl_botini},"Constant_Buffs","Constant_Buff_Gem#${i}"]}"
			/varset gl_cstbfs[${i},3] ${Ini[${gl_botini},"Constant_Buffs","Constant_Buff_Target#${i}"]}

			/varset gl_nmcsbf ${i}
		}

	/next i

	/for i 1 to 4
		
		/varset iter ${Ini[${gl_botini},"Command_Buffs","Command_Buff_Spell#${i}"]}
		
		/if (${Bool[${iter}]}) {

			/varset gl_cmdbfs[${i},1] "${Ini[${gl_botini},"Command_Buffs","Command_Buff_Spell#${i}"]}"
			/varset gl_cmdbfs[${i},2] "${Ini[${gl_botini},"Command_Buffs","Command_Buff_Gem#${i}"]}"

			/varset gl_nmcmbf ${i}
		}

	/next i

	/for i 1 to 4
		
		/varset iter ${Ini[${gl_botini},"Pet_Buffs","Pet_Buff_Spell#${i}"]}
		
		/if (${Bool[${iter}]}) {

			/varset gl_petbfs[${i},1] "${Ini[${gl_botini},"Pet_Buffs","Pet_Buff_Spell#${i}"]}"
			/varset gl_petbfs[${i},2] "${Ini[${gl_botini},"Pet_Buffs","Pet_Buff_Gem#${i}"]}"
			/varset gl_petbfs[${i},3] ${Ini[${gl_botini},"Pet_Buffs","Pet_Buff_Owner#${i}"]}

			/varset gl_nmptbf ${i}
		}

	/next i

	/return
}

sub Check_Plugins() {
	
	/if (!${Plugin[MQ2EQBC].Name.Length}) {

		/echo Plugin MQ2EQBC is not loaded, attempting to resolve...
	
		/plugin MQ2EQBC
		/delay 10s !${Select[${EQBC},NULL]}
	
		/if (${Select[${EQBC},NULL]}) /endmacro
	}

	/if (!${EQBC.Connected}) {

		/bccmd connect
		/delay 10s ${EQBC.Connected}

		/if (!${EQBC.Connected}) /endmacro
	}
	
	/if (!${Plugin[MQ2NetBots].Name.Length}) {

		/echo Plugin MQ2NetBots is not loaded, attempting to resolve...
		
		/plugin MQ2NetBots
		/delay 3s ${NetBots}
	
		/if (!${NetBots}) /endmacro
	}
	
	/if (${NetBots}) {
		/squelch /netbots on grab=on send=on
	}
	
	/if (!${Plugin[MQ2Exchange].Name.Length}) {
	
		/echo Plugin MQ2Exchange is not loaded, attempting to resolve...
		
		/plugin MQ2Exchange
		/delay 3s ${Plugin[MQ2Exchange].Name.Length}
	
		/if (!${Plugin[MQ2Exchange].Name.Length}) /endmacro
	}

	/if (!${Plugin[MQ2MoveUtils].Name.Length}) {
		
		/echo Plugin MQ2MoveUtils is not loaded, attempting to resolve...
		
		/plugin MQ2MoveUtils
		/delay 3s !${Select[${Stick.Status},NULL]}
		
		/if (${Select[${Stick.Status},NULL]}) /endmacro
	}

	/if (!${Plugin[MQ2NetAdvPath].Name.Length}) {
		
		/echo Plugin MQ2NetAdvPath is not loaded, attempting to resolve...
		
		/plugin MQ2NetAdvPath

		/if (!${Plugin[MQ2NetAdvPath].Name.Length}) /endmacro
	}	

	/if (${Select[${Me.Class.ShortName},BRD]}) {
		
		/if (!${Plugin[MQ2Twist].Name.Length}) {
			
			/echo Plugin Unable to detect MQ2Twist, attempting to resolve...
			
			/plugin MQ2Twist
			/delay 3s !${Select[${Twist},NULL]}
		}	
	}

	/if (!${Plugin[mq2itemdisplay].Name.Length}) {
		
		/echo Plugin Unable to detect MQ2ItemDisplay, attempting to resolve...
		
		/plugin MQ2ItemDisplay
		/delay 3s ${Plugin[mq2itemdisplay].Name.Length}
	}

	/if (!${Plugin[mq2hud].Name.Length}) {
		
		/echo Plugin Unable to detect MQ2HUD, attempting to resolve...
		
		/plugin MQ2HUD
		/delay 2s ${Plugin[mq2hud].Name.Length}
	}

	/if (!${Plugin[MQ2Cast].Name.Length}) {
		
		/echo Plugin MQ2Cast is not loaded, attempting to resolve...
		
		/plugin MQ2Cast
		/delay 3s ${Cast.Active}
		
		/if (!${Cast.Active}) /endmacro
	}

	/return
}
