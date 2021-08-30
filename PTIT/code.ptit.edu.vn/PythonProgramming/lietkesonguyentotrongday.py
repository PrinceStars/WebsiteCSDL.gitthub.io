from math import sqrt
n = int(input())
List = [int(x) for x in input().split()]


def checkPrime(a):
    if a < 2:
        return False
    for i in range(2, int(sqrt(a) + 1)):
        if a % i == 0:
            return False
    return True


Dict = {}
Res = []
for i in List:
    if i not in Dict:
        if checkPrime(i):
            Dict[i] = 1
            Res.append(i)
    else:
        Dict[i] += 1

for i in Res:
    print(i, Dict[i])
