from math import sqrt
n = int(input())
input = [int(x) for x in input().split()]


def isPrime(n):
    if n < 2:
        return True
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


a = []
for i in range(n):
    if input[i] not in a:
        a.append(input[i])
n = len(a)
for i in range(1, n):
    a[i] += a[i-1]

for i in range(n):
    if isPrime(a[i]) and isPrime(a[n-1] - a[i]):
        print(i)
        break
else:
    print("NOT FOUND")
