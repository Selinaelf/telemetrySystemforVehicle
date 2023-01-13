from socket import*
serverPort = 1200
serverSocket = socket(AF_INET, SOCK_STREAM)
serverSocket.bind(('', serverPort))
serverSocket.listen(1)


while 1:
connectionSocket, addr = serverSocket.accept()
data = connectionSocket.recv(1024)
connectionSocket.close()
fp = open('data.txt', 'w')
fp.write(data.decode())
fp.close()