from math import sqrt
t = int(input())


def UCLN(a, b):
    if b == 0:
        return a
    return UCLN(b, a % b)


def checkPrime(a):
    if a < 2:
        return False
    for i in range(2, int(sqrt(a)+1)):
        if a % i == 0:
            return False
    return True


while t > 0:
    t -= 1
    n = int(input())
    count = 0
    for i in range(n):
        if UCLN(i, n) == 1:
            count += 1
    if checkPrime(count):
        print("YES")
    else:
        print("NO")
