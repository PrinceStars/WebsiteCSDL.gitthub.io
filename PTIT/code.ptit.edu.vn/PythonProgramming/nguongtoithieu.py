from typing import SupportsRound


num = input()

Res = {}
if len(num) % 2:
    num = num[:len(num) - 1]

for i in range(0, len(num), 2):
    Value = int(num[i:i+2])
    if Value not in Res:
        Res[Value] = 1
    else:
        Res[Value] += 1

k = int(input())
found = 0

for i in sorted(Res.keys()):
    if Res[i] >= k:
        found = 1
        print(i, Res[i])

if not found:
    print("NOT FOUND")
