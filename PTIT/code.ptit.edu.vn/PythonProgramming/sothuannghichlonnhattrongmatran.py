from math import sqrt
n, m = [int(x) for x in input().split()]


def isPalindromic(n):
    return str(n) == str(n)[::-1] if n >= 10 else False


List = []
for i in range(n):
    List.append([int(x) for x in input().split()])

pos = []
maxPalindromicNumber = 1
for i in range(n):
    for j in range(m):
        if List[i][j] > maxPalindromicNumber:
            if isPalindromic(List[i][j]):
                maxPalindromicNumber = List[i][j]
                pos.clear()
                pos.append((i, j))
        elif List[i][j] == maxPalindromicNumber:
            pos.append((i, j))
if maxPalindromicNumber != 1:
    print(maxPalindromicNumber)
    for i in pos:
        print('Vi tri [{0}][{1}]'.format(i[0], i[1]))
else:
    print("NOT FOUND")
