import socket

#192.168.1.2
HOST = "192.168.74.80" #loopback
IP = "192.168.1.2"
SERVER_PORT = 65432
FORMAT = "utf8"

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.bind((HOST, SERVER_PORT))
s.listen()

print("SERVER SIDE")
print("server:", HOST, SERVER_PORT)
print("Waiting for Client")

conn, addr = s.accept()

print("client address:", addr)
print("conn:",conn.getsockname())

a = conn.recv(1024).decode(FORMAT)
b = conn.recv(1024).decode(FORMAT)
c = int(a)
d = int(b)

print("tong a va b la: ", c + d)
print("hieu a va b la: ", c - d)
print("tich a va b la: ", c*d)
print("thuong a va b la: ", c/d)

input()
s.close()
    

