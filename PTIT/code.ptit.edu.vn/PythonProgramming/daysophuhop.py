t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    array1 = [int(x) for x in input().split()]
    array2 = [int(x) for x in input().split()]
    array1.sort()
    array2.sort()
    res = 1
    for i in range(n):
        if array1[i] > array2[i]:
            res = 0
            break
    print("YES") if res == 1 else print("NO")
