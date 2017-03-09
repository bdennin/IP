
sub Cast(string name, string gem, int ID) {

	/if (${Me.CurrentMana} < ${Spell[${name}].Mana} + 200) /return 0

	/tar ID ${ID}

	/delay 1

	/casting "${name}|Gem${gem} -maxtries|5"

	:MonitorCasting

	/if (${Me.Casting.ID}) {

		/if (${Target.Type.Equal["Corpse"]}) {

			/interrupt
			/goto :DoneCasting
		}

		/if (${Target.Distance} > ${gl_spldis}) {

			/interrupt
			/goto :DoneCasting
		}

		/delay 3
		/goto :MonitorCasting
	}
 	
	/delay 2.5s

	:DoneCasting

	/return 1
}
