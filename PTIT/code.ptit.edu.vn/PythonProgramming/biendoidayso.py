def checkEqual(List):
    x = List[-1]
    for i in range(3):
        if List[i] != x:
            return False
    return True


while 1:
    List = [int(x) for x in input().split()]
    if (List[0] + List[1] + List[2] + List[3]) == 0:
        break
    step = 0
    while 1:
        if checkEqual(List):
            print(step)
            break
        x = List[0]
        for i in range(3):
            List[i] = abs(List[i]-List[i+1])
        List[3] = abs(List[3]-x)
        step += 1
