from math import sqrt

n = int(input())


def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


Res = []
List = [int(x) for x in input().split()]

for i in range(n):
    if isPrime(List[i]):
        Res.append(List[i])
        List[i] = 2

Res.sort()

j = 0
for i in List:
    if i == 2:
        print(Res[j], end=' ')
        j += 1
    else:
        print(i, end=' ')
