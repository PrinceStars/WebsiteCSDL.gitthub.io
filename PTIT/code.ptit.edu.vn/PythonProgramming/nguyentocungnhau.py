n = int(input())


def UCLN(a, b):
    if b == 0:
        return a
    return UCLN(b, a % b)


arr = [int(x) for x in input().split()]
arr.sort()

for i in range(n):
    for j in range(i+1, n):
        if UCLN(arr[i], arr[j]) == 1:
            print(arr[i], arr[j])
