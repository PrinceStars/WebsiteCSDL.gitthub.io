from math import sqrt
t = int(input())


def UCLN(a, b):
    return a if b == 0 else UCLN(b, a % b)


def checkPrime(a):
    if a < 2:
        return False
    for i in range(2, int(sqrt(a) + 1)):
        if a % i == 0:
            return False
    return True


def sum(a):
    res = 0
    for i in str(a):
        res += int(i)
    return res


while t > 0:
    t -= 1
    a, b = [int(x) for x in input().split()]
    if checkPrime(sum(UCLN(a, b))):
        print("YES")
    else:
        print("NO")
