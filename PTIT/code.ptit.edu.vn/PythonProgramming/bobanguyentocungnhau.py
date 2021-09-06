l, r = [int(x) for x in input().split()]


def GCD(a, b):
    return a if b == 0 else GCD(b, a % b)


List = [[] for i in range(201)]
for i in range(l, r):
    for j in range(i+1, r + 1):
        if GCD(i, j) == 1:
            List[i].append(j)

for i in range(l, r):
    for j in List[i]:
        for k in List[j]:
            if k in List[i]:
                print('({0}, {1}, {2})'.format(i, j, k))
