import subprocess
import time

if __name__ == '__main__':

  pw = "angel123\n"
  bytepw = bytes(pw, "ascii")

  #Run EQBC Server
  #subprocess.Popen("C:/Users/Jimbob/Downloads/IP/EQBCServer.exe", creationflags=8, shell=True)
  
  #Run MQ2
  #subprocess.Popen("C:/Users/Jimbob/Downloads/IP/MacroQuest2.exe", creationflags=8, shell=False)

  #Open Everquest
  eq1 = subprocess.Popen(["C:/everquest UF/eqgame.exe", "patchme", "/login:bdens01"], stdout=subprocess.PIPE, stdin=subprocess.PIPE, cwd="C:/everquest UF/", creationflags=subprocess.CREATE_NEW_PROCESS_GROUP)
  time.sleep(10)
  eq1.communicate(bytepw)


