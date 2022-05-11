   
import socket # khai báo thư viện socket trong python

HOST = "127.0.0.1" #loopback

SERVER_PORT = 65432 #Cổng để giao tiếp với thiết bị đầu cuối
FORMAT = "utf8" #Chuyển thành ký tự có dấu
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#hàm socket.socket() tạo một socket
#Stream Socket Dựa trên giao thức TCP việc truyền dữ liệu chỉ thực hiện giữa 2 quá trình đã thiết lập kết nối. 
#AF_INET kiểu này là thiết lập dưới dạng ipv4.

s.bind((HOST, SERVER_PORT)) #Phương thức này gắn kết địa chỉ (hostname, port number) tới Socket
s.listen() #Phương thức này thiết lập và bắt đầu TCP Listener.

print("SERVER SIDE")
print("server:", HOST, SERVER_PORT)
print("Waiting for Client")

conn, addr = s.accept() #Phương thức này chấp nhận một cách thụ động kết nối TCP Client, đợi cho tới khi kết nối tới.

print("client address:", addr)
print("conn:",conn.getsockname()) #Trả về hostname.

chuoi = conn.recv(1024).decode(FORMAT) #Phương thức này nhận TCP message.
CHUOI = chuoi.upper() #Hàm chuyển đổi thành chữ hoa.
conn.sendall(CHUOI.encode(FORMAT)) #chức năng sử dụng giao thức UDP để gửi dữ liệu.

input()
s.close() #Phương thức này đóng Socket.


