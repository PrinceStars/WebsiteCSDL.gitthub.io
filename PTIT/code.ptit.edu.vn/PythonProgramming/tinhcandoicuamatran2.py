n = int(input())

List = []
for i in range(n):
    List.append([int(x) for x in input().split()])

k = int(input())

phanTren = 0
for i in range(n-1):
    for j in range(0, n - 1 - i):
        phanTren += List[i][j]

phanDuoi = 0
for i in range(1, n):
    for j in range(n-i, n):
        phanDuoi += List[i][j]

if abs(phanTren - phanDuoi) <= k:
    print("YES")
else:
    print("NO")

print(abs(phanTren - phanDuoi))
