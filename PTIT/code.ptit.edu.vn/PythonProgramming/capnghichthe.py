t = int(input())
arr = [int(x) for x in input().split()]
res = 0
for i in range(t):
    for j in range(i, t):
        if arr[i] > arr[j]:
            res += 1
print(res)
