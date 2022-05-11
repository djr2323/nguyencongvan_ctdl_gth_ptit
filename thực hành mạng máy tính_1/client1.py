import socket #khai báo thư viện socket trong python

HOST = "127.0.0.1" #loopback
SERVER_PORT = 65432  #Cổng để giao tiếp với thiết bị đầu cuối
FORMAT = "utf8" #Chuyển thành ký tự có dấu

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#hàm socket.socket() tạo một socket
#Stream Socket Dựa trên giao thức TCP việc truyền dữ liệu chỉ thực hiện giữa 2 quá trình đã thiết lập kết nối. 
#AF_INET kiểu này là thiết lập dưới dạng ipv4.

print("CLIENT SIDE")
client.connect((HOST, SERVER_PORT)) #Phương thức này thiết lập một kết nối từ client đến server.
print("client address:", client.getsockname())

chuoi = input("chuoi thuong la: ") 

client.sendall(chuoi.encode(FORMAT)) #chức năng sử dụng giao thức UDP để gửi dữ liệu.

CHUOI = client.recv(1024).decode(FORMAT) #Phương thức này nhận TCP message.

print("\nchuoi duoc viet hoa la: ", CHUOI)

input()
client.close() ##Phương thức này đóng Socket.
    
