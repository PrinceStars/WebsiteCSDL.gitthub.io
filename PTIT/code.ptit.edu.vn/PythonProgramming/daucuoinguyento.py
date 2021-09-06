from math import sqrt
t = int(input())


def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


while t:
    t -= 1
    n = input()
    print("YES" if checkPrime(int(n[-3:]))
          and checkPrime(int(n[:3])) else "NO")
