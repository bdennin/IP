
sub Setup() {

	/call "Setup_Global"
	/call "Setup_Class"
	/call "Check_Plugins"

	/squelch /tgb on
	/squelch /hidecorpse looted

	/attack off
	/stick off
	/stand

	/return
}

sub Setup_Global() {
	
	/declare gl_dmgtmr		 	timer  	outer	0s
	/declare gl_zontmr 			timer 	outer 	0s

	/declare gl_myclas		 	string 	outer 	"${Me.Class}"
	/declare gl_splset			string	outer	"jim"
	/declare gl_curzon			string 	outer 	"0"

	/declare gl_comdis		 	float 	outer 	500.0
	/declare gl_spldis			float	outer 	100.0
	/declare gl_lshdis 			float 	outer 	30.0
	/declare gl_foldis			float 	outer 	10.0
	/declare gl_assdis			float 	outer 	8.0
	/declare gl_spkdis 			float 	outer 	5.0

	/declare gl_fwlgid			int 	outer	0
	/declare gl_asstid			int 	outer	0
	/declare gl_pettid 			int 	outer 	0	

	/declare gl_isfwlg		 	bool 	outer	false
	/declare gl_isastg		 	bool 	outer	false
	/declare gl_ismedg		 	bool 	outer	false
	/declare gl_brkcst			bool 	outer	false

	/return
}

sub Setup_Class() {

	/declare gl_qkbufs[4,4] 	string	outer 	"0"
	/declare gl_tgtbfs[2,4] 	string	outer 	"0"
	/declare gl_cbtabl[6] 		string	outer 	"0"

	/declare gl_assdir			string 	outer	"0"
	
	/declare gl_ghlspl 			string 	outer 	"0"
	/declare gl_thlspl			string 	outer 	"0"
	/declare gl_hotspl 			string 	outer 	"0"
	/declare gl_nukspl 			string 	outer 	"0"
	/declare gl_petspl 			string 	outer 	"0"
	/declare gl_petbuf 			string 	outer 	"0"

	/declare gl_nmqkbf			int 	outer 	0
	/declare gl_nmtgbf 			int 	outer 	0
	/declare gl_nmabls			int 	outer 	0
	
	/declare gl_helpct		 	int 	outer 	0
	/declare gl_hotpct 			int 	outer 	0

	/declare gl_helgem 			int 	outer 	0
	/declare gl_hotgem 			int 	outer 	0
	/declare gl_nukgem 			int 	outer 	0
	/declare gl_petgem 			int 	outer 	0

	/declare gl_ismele		 	bool 	outer	false
	/declare gl_iscstr			bool 	outer	false
	/declare gl_istank			bool 	outer	false
	/declare gl_shdmed			bool 	outer	false

	/if (${gl_myclas.Equal["Shadow Knight"]}) {

		/call "Init_Shadow_Knight"

	} else {

		/call "Init_${gl_myclas}"
	}

	/return
}

sub Init_Bard() {
		
	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		false
	/varset gl_istank 		false
	/varset gl_shdmed 		false

	/return
}

sub Init_Beastlord() {
		
	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		true
	/varset gl_istank 		false
	/varset gl_shdmed 		true

	/return
}

sub Init_Berserker() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		false
	/varset gl_istank 		false
	/varset gl_shdmed 		false

	/return
}

sub Init_Cleric() {

	/varset gl_qkbufs[4,4] 	"0"

	/varset gl_tgtbfs[1,1] 	"Hand of Virtue"
	/varset gl_tgtbfs[1,2] 	"Hrelgar"
	/varset gl_tgtbfs[1,3] 	"4"
	/varset gl_tgtbfs[1,4] 	"${Spell[${gl_tgtbfs[1,1]}].ID}"

	/varset gl_tgtbfs[2,1] 	"Aura of Reverence"
	/varset gl_tgtbfs[2,2] 	"Hrelgar"
	/varset gl_tgtbfs[2,3] 	"5"
	/varset gl_tgtbfs[2,4] 	"${Spell[${gl_tgtbfs[1,1]}].ID}"

	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"Complete Heal"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		2
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		70
	/varset gl_hotpct 		0

	/varset gl_helgem 		2
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Druid() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Enchanter() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Magician() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Monk() {
	
	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[1] 	"Flying Kick"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		1
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Necromancer() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Paladin() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"front"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		true
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Ranger() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Rogue() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Shadow_Knight() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		true
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Shaman() {

	/varset gl_qkbufs[1,1] "Talisman of Celerity"
	/varset gl_qkbufs[1,2] "Hrelgar"
	/varset gl_qkbufs[1,3] "6"
	/varset gl_qkbufs[1,4] "${Spell[${gl_qkbufs[1,1]}].ID}"

	/varset gl_qkbufs[2,1] "Talisman of Celerity"
	/varset gl_qkbufs[2,2] "Malachi"
	/varset gl_qkbufs[2,3] "6"
	/varset gl_qkbufs[2,4] "${Spell[${gl_qkbufs[2,1]}].ID}"

	/varset gl_qkbufs[3,1] "Spirit of the Leopard"
	/varset gl_qkbufs[3,2] "Hrelgar"
	/varset gl_qkbufs[3,3] "7"
	/varset gl_qkbufs[3,4] "${Spell[${gl_qkbufs[3,1]}].ID}"

	/varset gl_qkbufs[4,1] "Spirit of the Leopard"
	/varset gl_qkbufs[4,2] "Malachi"
	/varset gl_qkbufs[4,3] "7"
	/varset gl_qkbufs[4,4] "${Spell[${gl_qkbufs[3,1]}].ID}"

	/varset gl_tgtbfs[1,1] "Spirit of Bih`li"
	/varset gl_tgtbfs[1,2] "Hrelgar"
	/varset gl_tgtbfs[1,3] "5"
	/varset gl_tgtbfs[1,4] "${Spell[${gl_tgtbfs[1,1]}].ID}"

	/varset gl_tgtbfs[2,1] "Focus of the Seventh"
	/varset gl_tgtbfs[2,2] "Hrelgar"
	/varset gl_tgtbfs[2,3] "4"
	/varset gl_tgtbfs[2,4] "${Spell[${gl_tgtbfs[2,1]}].ID}"

	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"Quiescence"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"True Spirit"
	/varset gl_petbuf 		"Swift Like the Wind"

	/varset gl_nmqkbf 		4
	/varset gl_nmtgbf 		2
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		70

	/varset gl_helgem 		0
	/varset gl_hotgem 		2
	/varset gl_nukgem 		0
	/varset gl_petgem 		8

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Warrior() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	
	/varset gl_cbtabl[1] 	"Kick"
	/varset gl_cbtabl[2] 	"Taunt"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		2
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		true
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Wizard() {

	/varset gl_qkbufs[4,4] 	"0"
	/varset gl_tgtbfs[2,4] 	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"Lure of Frost"
	/varset gl_petspl 		"0"
	/varset gl_petbuf 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		1
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_shdmed 		true
	
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
