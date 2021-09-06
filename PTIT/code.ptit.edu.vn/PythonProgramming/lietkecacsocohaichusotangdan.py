num = input()

Res = set()
if len(num) % 2 == 0:
    for i in range(0, len(num), 2):
        Res.add(int(num[i:i+2]))
else:
    for i in range(0, len(num) - 1, 2):
        Res.add(int(num[i:i+2]))

print(*sorted(Res))
