num = input()

Res = []
if len(num) % 2 == 0:
    for i in range(0, len(num), 2):
        if int(num[i:i+2]) not in Res:
            Res.append(int(num[i:i+2]))
else:
    for i in range(0, len(num) - 1, 2):
        if int(num[i:i+2]) not in Res:
            Res.append(int(num[i:i+2]))

print(*Res)
