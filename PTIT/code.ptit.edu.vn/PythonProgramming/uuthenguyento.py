from math import sqrt
t = int(input())


def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


def check(n):
    prime = 0
    normal = 0
    for i in n:
        if i in '2357':
            prime += 1
        else:
            normal += 1
    return checkPrime(len(n)) and prime > normal


while t:
    t -= 1
    n = input()
    print("YES" if check(n) else "NO")
