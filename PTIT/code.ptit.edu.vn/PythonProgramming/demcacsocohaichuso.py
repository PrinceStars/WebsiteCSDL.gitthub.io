num = input()

Res = {}
if len(num) % 2 == 0:
    for i in range(0, len(num), 2):
        Value = int(num[i:i+2])
        if Value not in Res:
            Res[Value] = 1
        else:
            Res[Value] += 1
else:
    for i in range(0, len(num) - 1, 2):
        Value = int(num[i:i+2])
        if Value not in Res:
            Res[Value] = 1
        else:
            Res[Value] += 1

for i in Res.keys():
    print(i, Res[i])
