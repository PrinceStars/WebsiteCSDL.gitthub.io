t = int(input())
while t > 0:
    t -= 1
    a = input()
    if a[0:2] == a[-2:]:
        print('YES')
    else:
        print('NO')
