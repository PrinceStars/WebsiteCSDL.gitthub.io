from math import sqrt
t = int(input())


def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


def check(str):
    Sum = 0
    for i in range(len(str)):
        Sum += int(str[i])
        if int(str[i]) % 2 != i % 2:
            return False
    return checkPrime(Sum)


while t:
    t -= 1
    n = input()
    print("YES" if check(n) else "NO")
