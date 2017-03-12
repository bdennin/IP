
sub Init_Bard() {

	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Beastlord() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Berserker() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Frenzy"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Cleric() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			"Word of Vigor"
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			"3"
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		"80"
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		"3"		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		"Holy Light"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			"1"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		"70"

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	"Hand of Virtue"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		"4"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#2"	 	"Aura of Reverence"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#2" 		"5"

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Druid() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Enchanter() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Magician() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Monk() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Flying Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Necromancer() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				"Child of Bertoxxulous"
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					"7"

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	"Ancient: Seduction of Chaos"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		"6"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	"Phylum"

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			"Rune of Death"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			"5"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			"Phylum"

	/return
}

sub Init_Paladin() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"front"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"true"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Bash"
	/ini ${gl_botini} "Abilities" 		"Ability#2" 				"Taunt"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Ranger() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"true"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Rogue() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Backstab"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Shadow_Knight() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"front"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"true"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Bash"
	/ini ${gl_botini} "Abilities" 		"Ability#2" 				"Taunt"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Shaman() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		"Quiescence"
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		"1"
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	"80"

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				"True Spirit"
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					"8"

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	"Talisman of Celerity"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		"6"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	"Hrelgar"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#2" 	"Talisman of Celerity"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#2" 		"6"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#2"	"Malachi"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#3" 	"Talisman of Celerity"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#3" 		"6"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#3"	"Malachi"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#4" 	"Talisman of Celerity"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#4" 		"6"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#4"	"Khizzren"

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#5" 	"Spirit of the Leopard"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#5" 		"7"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#5"	"Hrelgar"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#6" 	"Spirit of the Leopard"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#6" 		"7"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#6"	"Malachi"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#7" 	"Spirit of the Leopard"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#7" 		"7"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#7"	"Plurbus"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#8" 	"Spirit of the Leopard"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#8" 		"7"
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#8"	"Khizzren"

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	"Talisman of the Boar"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		3
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#2"	 	"Focus of the Seventh"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#2" 		"4"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#3"	 	"Spirit of Bih`li"
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#3" 		"5"

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			"Spirit Quickening"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			"3"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			"Terakka"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#2" 			"Sprit of the Leopard"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#2" 			"7"
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#2" 			"Terakka"

	/return
}

sub Init_Warrior() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"front"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"true"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"
	/ini ${gl_botini} "Abilities" 		"Ability#2" 				"Taunt"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}

sub Init_Wizard() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			""
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		""

	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Spell" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Gem" 		""
	/ini ${gl_botini} "Heal_Over_Time" 	"Heal_Over_Time_Percent"	""

	/ini ${gl_botini} "Nuke" 			"Nuke_Spell" 				""
	/ini ${gl_botini} "Nuke"		 	"Nuke_Gem" 					""

	/ini ${gl_botini} "Pet" 			"Pet_Spell" 				""
	/ini ${gl_botini} "Pet"		 		"Pet_Gem" 					""

	/ini ${gl_botini} "Debuffs" 		"Debuff_Spell#1" 			""
	/ini ${gl_botini} "Debuffs" 		"Debuff_Gem#1" 				""

	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Spell#1" 	""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Gem#1" 		""
	/ini ${gl_botini} "Constant_Buffs" 	"Constant_Buff_Target#1"	""

	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Spell#1"	 	""
	/ini ${gl_botini} "Command_Buffs" 	"Command_Buff_Gem#1" 		""

	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Spell#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Gem#1" 			""
	/ini ${gl_botini} "Pet_Buffs" 		"Pet_Buff_Owner#1" 			""

	/return
}
