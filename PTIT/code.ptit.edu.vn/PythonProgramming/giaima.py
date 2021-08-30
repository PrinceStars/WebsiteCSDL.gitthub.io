t = int(input())
while t > 0:
    t -= 1
    str = input()
    char = str[0]
    for i in range(len(str)):
        if str[i].isalpha():
            char = str[i]
        else:
            print(char*int(str[i]), end='')
    print()
