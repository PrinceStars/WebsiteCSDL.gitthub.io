from math import sqrt
n, m = [int(x) for x in input().split()]


def checkPrime(a):
    if a < 2:
        return False
    for i in range(2, int(sqrt(a) + 1)):
        if a % i == 0:
            return False
    return True


arr = []
for i in range(n):
    x = [int(x) for x in input().split()]
    arr.append(x)

for i in range(n):
    for j in range(m):
        if checkPrime(arr[i][j]):
            arr[i][j] = 1
        else:
            arr[i][j] = 0

for i in range(n):
    for j in range(m):
        print(arr[i][j], end=' ')
    print()
