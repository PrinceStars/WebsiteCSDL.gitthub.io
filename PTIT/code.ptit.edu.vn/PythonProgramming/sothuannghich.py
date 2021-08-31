a, b, m = [int(x) for x in input().split()]


def checkThuanNghich(List):
    n = len(List)
    for i in range(n//2):
        if List[i] != List[n-1-i]:
            return False
    return True


def decimalToBase(num, base):
    Num = num
    List = []
    while num:
        List.append(num % base)
        num //= base
    if checkThuanNghich(List):
        return True
    return False


def checkNum(i):
    for j in range(2, m+1):
        if decimalToBase(i, j) is False:
            return False
    print(i)
    return True


Res = 0
for i in range(a, b+1):
    if checkNum(i):
        Res += 1

print(Res)
