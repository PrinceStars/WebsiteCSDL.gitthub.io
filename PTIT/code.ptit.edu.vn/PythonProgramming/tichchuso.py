t = int(input())

while t:
    t -= 1
    n = input()
    Res = 1
    for i in n:
        if i != '0':
            Res *= int(i)
    print(Res)
