while 1:
    t = int(input())
    if t == 0:
        break
    Set = set()
    while t != 1:
        if t % 2:
            t = t*3 + 1
            Set.add(t)
        else:
            t = t/2
            Set.add(t)
    print(len(Set)+1)
