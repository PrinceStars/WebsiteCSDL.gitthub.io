from math import sqrt
t = int(input())
while t:
    t -= 1
    n = int(input())*2
    Result = 0
    for i in range(2, int(sqrt(n)+1)):
        if n % i == 0:
            Diff = i
            Sum = n//i
            temp = Sum - Diff + 1
            if temp % 2 == 0 and temp > 0:
                Result += 1
    print(Result)
