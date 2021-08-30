t = int(input())
fiboNum = [0, 1]
for i in range(2, 93):
    fiboNum.append(fiboNum[i-1] + fiboNum[i-2])
while t > 0:
    t -= 1
    a, b = [int(x) for x in input().split()]
    for i in range(a, b+1):
        print(fiboNum[i], end=' ')
    print()
