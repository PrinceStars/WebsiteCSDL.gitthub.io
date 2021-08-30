t = int(input())
dif = ord('Z') - ord('A') + 1


def encode(char, amount):
    return chr((ord(char) - ord('A') + amount) % dif + ord('A'))


def Rotate(str):
    sum = 0
    for i in str:
        sum += ord(i)-ord('A')
    res = ''
    for i in str:
        res += encode(i, sum)
    return res


def Merge(str1, str2):
    for i in range(len(str1)):
        print(encode(str1[i], ord(str2[i]) - ord('A')), end='')
    print()


while t:
    t -= 1
    Code = input()
    n = len(Code)
    leftPart = Rotate(Code[:n//2])
    rightPart = Rotate(Code[n//2:])

    Merge(leftPart, rightPart)
