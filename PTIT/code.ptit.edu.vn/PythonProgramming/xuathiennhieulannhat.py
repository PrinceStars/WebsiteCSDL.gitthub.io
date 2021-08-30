import sys
t = int(input())


def find(Dict, size):
    have = 0
    res = 1e9
    for i in Dict:
        if Dict[i] > n/2:
            if i < res:
                have = 1
                res = i
    if have:
        print(res)
    else:
        print('NO')


while t > 0:
    t -= 1
    n = int(input())
    arr = [int(x) for x in input().split()]
    Dict = {}
    for i in range(n):
        if arr[i] in Dict:
            Dict[arr[i]] += 1
        else:
            Dict[arr[i]] = 1

    find(Dict, n)
