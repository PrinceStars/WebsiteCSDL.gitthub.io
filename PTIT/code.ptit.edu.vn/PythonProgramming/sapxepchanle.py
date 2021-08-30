n = int(input())

List = []
while len(List) < n:
    for x in input().split():
        List.append(int(x))

Odd = []
Even = []

for i in range(n):
    if List[i] % 2:
        Odd.append(List[i])
        List[i] = 1
    else:
        Even.append(List[i])
        List[i] = 0

Even.sort()
Odd.sort()
Odd.reverse()

x, y = 0, 0
for i in range(n):
    if List[i]:
        print(Odd[x], end=' ')
        x += 1
    else:
        print(Even[y], end=' ')
        y += 1
