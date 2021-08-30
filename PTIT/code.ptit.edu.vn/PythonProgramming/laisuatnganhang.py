t = int(input())
while t > 0:
    t -= 1
    n, x, m = [float(x) for x in input().split()]
    years = 0
    while n <= m:
        n *= (100 + x)/100
        years += 1
    print(years)
