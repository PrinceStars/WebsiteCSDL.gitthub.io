ListPrimeNumber = [0]


def SieveOfEratosthenes():
    prime = [True for i in range(10001)]
    p = 2
    while (p*p <= 10000):
        if (prime[p] == True):
            for i in range(p ** 2, 10001, p):
                prime[i] = False
        p += 1
    for p in range(2, 10001):
        if prime[p]:
            ListPrimeNumber.append(p)


n, x = [int(x) for x in input().split()]

SieveOfEratosthenes()

for i in range(1, 1001):
    ListPrimeNumber[i] = ListPrimeNumber[i] + ListPrimeNumber[i-1]

for i in range(n+1):
    print(x + ListPrimeNumber[i], end=' ')
