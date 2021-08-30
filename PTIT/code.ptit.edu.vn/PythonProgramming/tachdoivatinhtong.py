num = input()

while len(num) > 1:
    n = len(num)
    num = str(int(num[:n//2]) + int(num[n//2:]))
    print(num)
