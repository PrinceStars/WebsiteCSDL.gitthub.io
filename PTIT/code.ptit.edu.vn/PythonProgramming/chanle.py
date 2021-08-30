t = int(input())
while t > 0:
    t -= 1
    num = input()
    sum = 0
    res = True
    for i in range(len(num)-1):
        sum += int(num[i])
        if abs(int(num[i]) - int(num[i+1])) != 2:
            res = False
            break
    sum += int(num[-1:])
    if res and sum % 10 == 0:
        print("YES")
    else:
        print("NO")
