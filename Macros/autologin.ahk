
;Set this equal to your MQ2 directory
ippath = C:\Users\Jimbob\Downloads\IP

run, EQBCServer.exe, %ippath%
run, MacroQuest2.exe, %ippath%

loop, 6 
{
	run, eqgame.exe patchme /login:bdens0%A_Index%, C:\everquest UF	
	sleep, 8000
	sendinput, angel123
	sendinput, {Enter}
}