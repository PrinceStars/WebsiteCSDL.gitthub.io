t = int(input())


def func(a):
    mul = 1
    for i in a:
        mul *= int(i)
    return mul


while t > 0:
    t -= 1
    n = int(input())
    List = [x for x in input().split()]
    print(*sorted(List, key=lambda x: (func(x), int(x))))
