t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    List = [int(x) for x in input().split()]
    Dict = {}
    for i in List:
        if i in Dict:
            Dict[i] += 1
        else:
            Dict[i] = 1
    for i in Dict:
        if Dict[i] % 2:
            print(i)
            break
