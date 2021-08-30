n = int(input())
List = set([int(x) for x in input().split()])
res = min(List)
for i in List:
    if res == i:
        res += 1
    else:
        break
print(res)
