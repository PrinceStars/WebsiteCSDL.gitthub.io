from math import sqrt
t = int(input())


def checkPrime(num):
    if num < 2:
        return False
    for i in range(2, int(sqrt(num) + 1)):
        if num % i == 0:
            return False
    return True


while t:
    t -= 1
    num = input()
    Sum = sum(list(map(int, num)))
    print("YES" if checkPrime(Sum) else "NO")
