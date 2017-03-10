
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
	
	/declare gl_setini 			string 	outer 	"Settings/Settings.ini"
	/declare gl_botini 			string 	outer 	"Bots/${MacroQuest.Server}_${Me.Name}_${Me.Class}"
	/declare gl_splset			string	outer	"jim"
	/declare gl_curzon			string 	outer 	"0"

	/declare gl_cbttmr 			timer 	outer 	0s
	/declare gl_dmgtmr		 	timer  	outer	0s
	/declare gl_zontmr 			timer 	outer 	0s

	/declare gl_comdis		 	float 	outer 	500.0
	/declare gl_rngdis 			float 	outer 	125.0
	/declare gl_spldis			float	outer 	100.0
	/declare gl_ghldis 			float 	outer 	50.0
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

	/return
}

sub Setup_Class() {

	/declare gl_qckbfs[8,4] 	string	outer 	"0"
	/declare gl_tgtbfs[4,4] 	string	outer 	"0"
	/declare gl_petbfs[4,4] 	string 	outer 	"0"
	/declare gl_debufs[4,4] 	string 	outer 	"0"
	/declare gl_cbtabl[6] 		string	outer 	"0"

	/declare gl_assdir			string 	outer	"0"
	
	/declare gl_ghlspl 			string 	outer 	"0"
	/declare gl_thlspl			string 	outer 	"0"
	/declare gl_hotspl 			string 	outer 	"0"
	/declare gl_nukspl 			string 	outer 	"0"
	/declare gl_petspl 			string 	outer 	"0"

	/declare gl_nmqkbf			int 	outer 	0
	/declare gl_nmtgbf 			int 	outer 	0
	/declare gl_nmptbf 			int 	outer 	0
	/declare gl_nmabls			int 	outer 	0
	
	/declare gl_ghlpct 			int 	outer 	0
	/declare gl_helpct		 	int 	outer 	0
	/declare gl_hotpct 			int 	outer 	0

	/declare gl_ghlgem 			int 	outer	0
	/declare gl_helgem 			int 	outer 	0
	/declare gl_hotgem 			int 	outer 	0
	/declare gl_nukgem 			int 	outer 	0
	/declare gl_petgem 			int 	outer 	0

	/declare gl_ismele		 	bool 	outer	false
	/declare gl_iscstr			bool 	outer	false
	/declare gl_istank			bool 	outer	false
	/declare gl_isrngd 			bool 	outer 	false
	/declare gl_shdmed			bool 	outer	false

	/if (${Me.Class.Name.Equal["Shadow Knight"]}) {

		/call "Init_Shadow_Knight"

	} else {

		/call "Init_${Me.Class.Name}"
	}

	/return
}

sub Init_Bard() {
		
	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		false
	/varset gl_istank 		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false

	/return
}

sub Init_Beastlord() {
		
	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		true
	/varset gl_istank 		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true

	/return
}

sub Init_Berserker() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele 		true
	/varset gl_iscstr 		false
	/varset gl_istank 		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false

	/return
}

sub Init_Cleric() {

	/varset gl_qckbfs[4,4] 	"0"

	/varset gl_tgtbfs[1,1] 	"Hand of Virtue"
	/varset gl_tgtbfs[1,2] 	"Hrelgar"
	/varset gl_tgtbfs[1,3] 	"4"
	/varset gl_tgtbfs[1,4] 	"${Spell[${gl_tgtbfs[1,1]}].ID}"

	/varset gl_tgtbfs[2,1] 	"Aura of Reverence"
	/varset gl_tgtbfs[2,2] 	"Hrelgar"
	/varset gl_tgtbfs[2,3] 	"5"
	/varset gl_tgtbfs[2,4] 	"${Spell[${gl_tgtbfs[2,1]}].ID}"

	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"Holy Light"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		2
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		60
	/varset gl_helpct 		75
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		3
	/varset gl_helgem 		1
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Druid() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Enchanter() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Magician() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Monk() {
	
	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[1] 	"Flying Kick"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		1
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Necromancer() {

	/varset gl_qckbfs[1,1] "Ancient: Seduction of Chaos"
	/varset gl_qckbfs[1,2] "Phylum"
	/varset gl_qckbfs[1,3] "6"
	/varset gl_qckbfs[1,4] "${Spell[${gl_qckbfs[1,1]}].ID}"

	/varset gl_tgtbfs[4,4] 	"0"

	/varset gl_petbfs[1,1] "Rune of Death"
	/varset gl_petbfs[1,2] "Phylum"
	/varset gl_petbfs[1,3] "5"
	/varset gl_petbfs[1,4] "${Spell[${gl_petbfs[1,1]}].ID}"

	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		""
	/varset gl_petspl 		"Child of Bertoxxulous"

	/varset gl_nmqkbf 		1
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		1
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		7

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Paladin() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"front"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		true
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Ranger() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Rogue() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Shadow_Knight() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		true
	/varset gl_istank		true
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Shaman() {

	/varset gl_qckbfs[1,1] "Talisman of Celerity"
	/varset gl_qckbfs[1,2] "Hrelgar"
	/varset gl_qckbfs[1,3] "6"
	/varset gl_qckbfs[1,4] "${Spell[${gl_qckbfs[1,1]}].ID}"

	/varset gl_qckbfs[2,1] "Talisman of Celerity"
	/varset gl_qckbfs[2,2] "Malachi"
	/varset gl_qckbfs[2,3] "6"
	/varset gl_qckbfs[2,4] "${Spell[${gl_qckbfs[2,1]}].ID}"

	/varset gl_qckbfs[3,1] "Talisman of Celerity"
	/varset gl_qckbfs[3,2] "Plurbus"
	/varset gl_qckbfs[3,3] "6"
	/varset gl_qckbfs[3,4] "${Spell[${gl_qckbfs[3,1]}].ID}"

	/varset gl_qckbfs[4,1] "Talisman of Celerity"
	/varset gl_qckbfs[4,2] "Gorwynn"
	/varset gl_qckbfs[4,3] "6"
	/varset gl_qckbfs[4,4] "${Spell[${gl_qckbfs[4,1]}].ID}"

	/varset gl_qckbfs[5,1] "Spirit of the Leopard"
	/varset gl_qckbfs[5,2] "Hrelgar"
	/varset gl_qckbfs[5,3] "7"
	/varset gl_qckbfs[5,4] "${Spell[${gl_qckbfs[5,1]}].ID}"

	/varset gl_qckbfs[6,1] "Spirit of the Leopard"
	/varset gl_qckbfs[6,2] "Malachi"
	/varset gl_qckbfs[6,3] "7"
	/varset gl_qckbfs[6,4] "${Spell[${gl_qckbfs[6,1]}].ID}"

	/varset gl_qckbfs[7,1] "Spirit of the Leopard"
	/varset gl_qckbfs[7,2] "Plurbus"
	/varset gl_qckbfs[7,3] "7"
	/varset gl_qckbfs[7,4] "${Spell[${gl_qckbfs[7,1]}].ID}"

	/varset gl_qckbfs[8,1] "Spirit of the Leopard"
	/varset gl_qckbfs[8,2] "Gorwynn"
	/varset gl_qckbfs[8,3] "7"
	/varset gl_qckbfs[8,4] "${Spell[${gl_qckbfs[8,1]}].ID}"

	/varset gl_tgtbfs[1,1] "Spirit of Bih`li"
	/varset gl_tgtbfs[1,2] "Hrelgar"
	/varset gl_tgtbfs[1,3] "5"
	/varset gl_tgtbfs[1,4] "${Spell[${gl_tgtbfs[1,1]}].ID}"

	/varset gl_tgtbfs[2,1] "Focus of the Seventh"
	/varset gl_tgtbfs[2,2] "Hrelgar"
	/varset gl_tgtbfs[2,3] "4"
	/varset gl_tgtbfs[2,4] "${Spell[${gl_tgtbfs[2,1]}].ID}"

	/varset gl_tgtbfs[3,1] "Talisman of the Boar"
	/varset gl_tgtbfs[3,2] "Hrelgar"
	/varset gl_tgtbfs[3,3] "3"
	/varset gl_tgtbfs[3,4] "${Spell[${gl_tgtbfs[3,1]}].ID}"

	/varset gl_petbfs[1,1] "Spirit Quickening"
	/varset gl_petbfs[1,2] "Pet"
	/varset gl_petbfs[1,3] "4"
	/varset gl_petbfs[1,4] "${Spell[${gl_petbfs[1,1]}].ID}"

	/varset gl_petbfs[2,1] "Spirit of the Leopard"
	/varset gl_petbfs[2,2] "Pet"
	/varset gl_petbfs[2,3] "7"
	/varset gl_petbfs[2,4] "${Spell[${gl_petbfs[2,1]}].ID}"

	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"Quiescence"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		8
	/varset gl_nmtgbf 		3
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		80

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		1
	/varset gl_nukgem 		0
	/varset gl_petgem 		8

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
	/varset gl_shdmed 		true
	
	/return
}

sub Init_Warrior() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	
	/varset gl_cbtabl[1] 	"Kick"
	/varset gl_cbtabl[2] 	"Taunt"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"0"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		2
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		0
	/varset gl_petgem 		0

	/varset gl_ismele		true
	/varset gl_iscstr		false
	/varset gl_istank		true
	/varset gl_isrngd 		false
	/varset gl_shdmed 		false
	
	/return
}

sub Init_Wizard() {

	/varset gl_qckbfs[4,4] 	"0"
	/varset gl_tgtbfs[4,4] 	"0"
	/varset gl_petbfs[4,4] 	"0"
	/varset gl_debufs[4,4]	"0"
	/varset gl_cbtabl[6] 	"0"

	/varset gl_assdir		"behind"

	/varset gl_ghlspl 		"0"
	/varset gl_thlspl		"0"
	/varset gl_hotspl 		"0"
	/varset gl_nukspl 		"Lure of Frost"
	/varset gl_petspl 		"0"

	/varset gl_nmqkbf 		0
	/varset gl_nmtgbf 		0
	/varset gl_nmptbf 		0
	/varset gl_nmabls 		0
	
	/varset gl_ghlpct 		0
	/varset gl_helpct 		0
	/varset gl_hotpct 		0

	/varset gl_ghlgem 		0
	/varset gl_helgem 		0
	/varset gl_hotgem 		0
	/varset gl_nukgem 		1
	/varset gl_petgem 		0

	/varset gl_ismele		false
	/varset gl_iscstr		true
	/varset gl_istank		false
	/varset gl_isrngd 		false
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
