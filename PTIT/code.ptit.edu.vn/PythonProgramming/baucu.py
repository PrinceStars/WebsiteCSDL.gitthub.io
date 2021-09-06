n, m = [int(x) for x in input().split()]

List = [int(x) for x in input().split()]

Dict = {}
for i in range(m):
    Dict[i+1] = 0


for i in range(n):
    Dict[List[i]] += 1

Dict = sorted(Dict.items(), key=lambda x: (-x[1], x[0]))

i = 1
while i < len(Dict) and Dict[i][1] == Dict[i-1][1]:
    i += 1

if i == len(Dict) or Dict[i][1] == 0:
    print("NONE")
elif Dict[i][1] != 0:
    print(Dict[i][0])
