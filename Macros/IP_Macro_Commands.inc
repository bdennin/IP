
sub Cast(string name, string gem, int ID) {

	/declare waittm float local

	/varset gl_brkcst false

	/if (${Me.CurrentMana} < ${Spell[${name}].Mana} + 200) /return 0

	/tar ID ${ID}

	/delay 1

	/casting "${name}|Gem${gem} -maxtries|5"

	/varcalc waittm ${Spell[${name}].MyCastTime} + 2.5
 
	/delay ${waittm}s ${gl_brkcst != false}

	/if (${gl_brkcst}) {
		/bc my casting was broken!
		/interrupt
	}
	
	/return 1
}
