import math
a, b, c, d = map(int , input().split(' '))
print("khoang cach AB")
print(math.sqrt((a-c)*(a-c)+(b-d)*(b-d)))
e = math.sqrt(a*a+b*b)
f = math.sqrt(c*c+d*d)
if(e < f): print("diem A gan diem O nhat")
elif(e > f): print("diem B gan diem O nhat")