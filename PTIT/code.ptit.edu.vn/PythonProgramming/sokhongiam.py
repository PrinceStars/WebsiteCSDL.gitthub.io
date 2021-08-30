t = int(input())


def checkString(a):
    for j in range(0, len(a)-1):
        if str[j] > str[j+1]:
            return "NO"
    return "YES"


for i in range(0, t):
    str = input()
    print(checkString(str))
