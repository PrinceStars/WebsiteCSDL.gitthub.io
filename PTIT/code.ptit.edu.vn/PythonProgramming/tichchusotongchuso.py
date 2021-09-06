t = int(input())

while t:
    t -= 1
    n = input()
    Sum = sum(list(int(n[i]) for i in range(1, len(n), 2)))
    Mul = 1
    have = 0
    for i in range(0, len(n), 2):
        if n[i] != '0':
            have = 1
            Mul *= int(n[i])
    if have == 0:
        Mul = 0

    print(Mul, Sum)
