t = int(input())


def convertTool(decimal, base):
    Res = []
    while decimal:
        i = decimal % base
        if i < 10:
            Res.append(str(i))
        else:
            Res.append(chr(ord('A') + i-10))
        decimal //= base
    print(''.join(reversed(Res)))


while t > 0:
    t -= 1
    n, b = [int(x) for x in input().split()]
    convertTool(n, b)
