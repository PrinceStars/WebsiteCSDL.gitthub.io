t = int(input())

while t > 0:
    t -= 1
    n = input()
    list = [int(x) for x in n]
    for i in range(len(list)-1, 0, -1):
        if list[i] >= 5:
            list[i-1] += 1
        list[i] = 0
    print("".join([str(x) for x in list]))
