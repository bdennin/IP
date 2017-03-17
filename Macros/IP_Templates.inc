
sub Init_Bard() {

	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Frenzy"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""		

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		"Minor Healing"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			"1"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		"90"

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

sub Init_Druid() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"behind"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"false"
	/ini ${gl_botini} "Control" 		"Should_Heal"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		"Minor Healing"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			"1"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		"90"

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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

sub Init_Paladin() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"front"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"true"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Bash"
	/ini ${gl_botini} "Abilities" 		"Ability#2" 				"Taunt"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"true"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Kick"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"false"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Backstab"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"true"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"false"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				"Bash"
	/ini ${gl_botini} "Abilities" 		"Ability#2" 				"Taunt"

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"true"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Spell" 		"Minor Healing"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Gem" 			"1"
	/ini ${gl_botini} "Target_Heal" 	"Target_Heal_Percent"		"80"

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

sub Init_Warrior() {
	
	/ini ${gl_botini} "Control" 		"Assist_Direction" 			"front"
	/ini ${gl_botini} "Control" 		"Should_Melee"				"true"
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
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

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
	/ini ${gl_botini} "Control" 		"Should_Heal"				"false"
	/ini ${gl_botini} "Control" 		"Should_Cast"		 		"true"
	/ini ${gl_botini} "Control" 		"Should_Tank"				"false"
	/ini ${gl_botini} "Control" 		"Should_Shoot"	 			"false"
	/ini ${gl_botini} "Control" 		"Should_Meditate" 			"true"
	
	/ini ${gl_botini} "Abilities" 		"Ability#1" 				""

	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Spell" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Gem" 			""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Percent"		""
	/ini ${gl_botini} "Group_Heal" 		"Group_Heal_Targets"		""				

	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Spell" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Gem" 		""
	/ini ${gl_botini} "Complete_Heal" 	"Complete_Heal_Percent"		""

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
