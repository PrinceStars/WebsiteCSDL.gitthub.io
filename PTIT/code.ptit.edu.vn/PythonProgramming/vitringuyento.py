from math import sqrt
t = int(input())
List = '2357'


def checkPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


def check(str):
    for i in range(len(str)):
        if checkPrime(i):
            if str[i] not in List:
                return False
        elif str[i] in List:
            return False

    return True


while t:
    t -= 1
    n = input()
    print("YES" if check(n) else "NO")
