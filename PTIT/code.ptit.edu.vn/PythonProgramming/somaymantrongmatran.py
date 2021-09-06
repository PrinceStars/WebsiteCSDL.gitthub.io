n, m = [int(x) for x in input().split()]


def find(List, u):
    Res = []
    for i in range(n):
        for j in range(m):
            if List[i][j] == u:
                Res.append((i, j))
    if len(Res) > 0:
        print(u)
        for i in Res:
            print('Vi tri [{0}][{1}]'.format(i[0], i[1]))
    else:
        print("NOT FOUND")


List = []
for i in range(n):
    List.append([int(x) for x in input().split()])

luckyValue = max([max(List[i]) for i in range(n)]) - \
    min([min(List[i]) for i in range(n)])

find(List, luckyValue)
