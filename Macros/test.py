from multiprocessing import Process

import os

def RunChatServer(var):
  print(var)
  os.system("C:/Users/Jimbob/Downloads/IP/EQBCServer.exe")

for i in range(0, 5):
  process = Process(target=RunChatServer, args=(i,), daemon=True)
  process.start()
  process.run()