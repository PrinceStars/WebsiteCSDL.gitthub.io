from math import sqrt
n = int(input())
List = [int(x) for x in input().split()]


def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


Res = 0
for i in range(n):
    if not isPrime(List[i]):
        for j in range(1, 20):
            if isPrime(List[i] - j) or isPrime(List[i] + j):
                Res = max(j, Res)
                break

print(Res)
