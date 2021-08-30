t = int(input())
while t > 0:
    t -= 1
    n, m, k = [int(x) for x in input().split()]
    List1 = [int(x) for x in input().split()]
    List2 = [int(x) for x in input().split()]
    List3 = [int(x) for x in input().split()]

    x, y, z = 0, 0, 0
    have = False
    while x < n and y < m and z < k:
        temp = min(List1[x], List2[y], List3[z])
        if temp == List1[x] and temp == List2[y] and temp == List3[z]:
            x += 1
            y += 1
            z += 1
            have = True
            print(temp, end=' ')
            continue
        if temp == List1[x]:
            x += 1
        if temp == List2[y]:
            y += 1
        if temp == List3[z]:
            z += 1
    if have is False:
        print("NO")
    else:
        print()
