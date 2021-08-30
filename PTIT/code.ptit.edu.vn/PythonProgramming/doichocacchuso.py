t = int(input())


def findRes(num):
    i = len(num) - 1
    while i >= 1 and num[i-1] <= num[i]:
        i -= 1
    posL = i-1
    if posL == -1:
        print('-1')
        return
    posR = i
    # print(posL, posR)
    for j in range(i, len(num)):
        if num[j] < num[posL] and num[j] > num[posR]:
            posR = j

    if posL == 0:
        if num[posL] == '1' or num[posR] == '0':
            print('-1')
            return

    print(num[:posL] + num[posR] + num[posL+1:posR] + num[posL] + num[posR+1:])


while t:
    t -= 1
    num = input()
    findRes(num)
