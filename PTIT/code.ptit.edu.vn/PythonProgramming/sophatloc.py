t = int(input())
while t != 0:
    t -= 1
    str = input()
    if str[-2:] == "86":
        print("YES")
    else:
        print("NO")
