def check(num):
    for i in num:
        if i != '4' and i != '7':
            return False
    return True


t = int(input())
while t > 0:
    t -= 1
    num = input()
    if check(num):
        print("YES")
    else:
        print("NO")
