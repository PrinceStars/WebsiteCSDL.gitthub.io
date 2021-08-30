n = int(input())

List2D = []

for i in range(n):
    List2D.append(input())

row = [0 for i in range(n)]
col = [0 for i in range(n)]

for i in range(n):
    for j in range(n):
        if List2D[i][j] == 'C':
            row[i] += 1
            col[j] += 1
Res = 0
for i in range(n):
    Res += row[i]*(row[i]-1)//2 + col[i]*(col[i]-1)//2

print(Res)
