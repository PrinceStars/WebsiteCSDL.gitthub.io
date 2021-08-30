t = int(input())
while t:
    t -= 1
    n, p = [int(x) for x in input().split()]
    res = 0
    x = p
    while x <= n:
        res += ((n//x)*x - x)//x + 1
        x *= p
    print(res)
