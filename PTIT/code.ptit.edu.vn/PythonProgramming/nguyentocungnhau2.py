n, k = [int(x) for x in input().split()]


def GCD(a, b):
    return a if b == 0 else GCD(b, a % b)


count = 0
for i in range(10**(k-1), 10**k-1):
    if GCD(n, i) == 1:
        count += 1
        print(i, end=' ')
        if count == 10:
            count = 0
            print()
