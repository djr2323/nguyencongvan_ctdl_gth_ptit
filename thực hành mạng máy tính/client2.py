import socket

HOST = "127.0.0.1"
SERVER_PORT = 65432
FORMAT = "utf8"

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

print("CLIENT SIDE")
client.connect((HOST, SERVER_PORT))
print("client address:", client.getsockname())

a = input("a = ")
b = input("b = ")

client.sendall(a.encode(FORMAT))
client.sendall(b.encode(FORMAT))

input()
client.close()
    
