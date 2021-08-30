P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while 1:
    Userinput = input().split()
    k = int(Userinput[0])
    if k == 0:
        break
    s = Userinput[1]
    res = ""
    for i in range(len(s)):
        res = P[(P.find(s[i])+k) % 28] + res

    print(res)
