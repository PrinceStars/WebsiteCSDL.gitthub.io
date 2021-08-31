n = int(input())


def solve():
    List = []
    for i in range(n):
        List.append([int(x) for x in input().split()])

    if n == 2:
        a = List[0][1] // 2
        print(a, a)
        return

    Res = [0]*n
    Res[1] = (List[0][1] + List[1][2] - List[0][2])//2
    Res[0] = List[0][1] - Res[1]
    for i in range(2, n):
        Res[i] = List[0][i] - Res[0]
    print(*Res)


solve()
