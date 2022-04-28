MOD = 1000000007


def power(a, b):
    if(b == 0):
        return 1
    kq = power(int(a), int(b/2))
    if(b % 2 == 0):
        return (kq*kq) % MOD
    else:
        return (((kq*kq) % MOD)*a) % MOD


n = int(input())
while (n > 0):
    a, b = map(int, input().split(' '))
    print(int(power(a, b)))
    n -= 1