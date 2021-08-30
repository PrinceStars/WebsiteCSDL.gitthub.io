t = int(input())
while t > 0:
    t -= 1
    string = input() + ' '
    char = string[0]
    count = 0
    for i in string:
        if i is char:
            count += 1
        else:
            print(str(count)+char, end='')
            count = 1
            char = i
    print()
