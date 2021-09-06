from math import sqrt
n, m = [int(x) for x in input().split()]


def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


List = []
for i in range(n):
    List.append([int(x) for x in input().split()])

pos = []
maxPrimeNumber = 1
for i in range(n):
    for j in range(m):
        if List[i][j] > maxPrimeNumber:
            if isPrime(List[i][j]):
                maxPrimeNumber = List[i][j]
                pos.clear()
                pos.append((i, j))
        elif List[i][j] == maxPrimeNumber:
            pos.append((i, j))
if maxPrimeNumber != 1:
    print(maxPrimeNumber)
    for i in pos:
        print('Vi tri [{0}][{1}]'.format(i[0], i[1]))
else:
    print("NOT FOUND")
