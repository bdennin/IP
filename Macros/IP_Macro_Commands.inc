
sub Cast(string name, string gem, int ID) {

	/declare manpts int local

	/varcalc manpts ${Spell[${name}].Mana} * 30 / 100 + ${Spell[${name}].Mana}

	/if (${Me.CurrentMana} < ${manpts}) /return 0

	/tar ID ${ID}

	/delay 1

	/casting "${name}|Gem${gem} -maxtries|5"

	:MonitorCasting

	/if (${Me.Casting.ID}) {
			
		/if (${Spawn[ID ${ID}].Type.Equal["Corpse"]} || ${Spawn[ID ${ID}].Distance} > ${gl_spldis}) {

			/interrupt
			/goto :DoneCasting		
		} 

		/delay 1
		/goto :MonitorCasting
	}
 	
	/delay 2.5s

	:DoneCasting

	/return 1
}
