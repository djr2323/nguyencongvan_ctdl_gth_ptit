t = int(input())
arr = [1,1,2,5,14,42,132,429]
for i in range(8, 101):
    arr.append(0)
    for j in range(0,i):
        arr[i] += arr[j]*arr[i-j-1]
while(t):
    n = int(input())
    print(arr[n])
    t -= 1