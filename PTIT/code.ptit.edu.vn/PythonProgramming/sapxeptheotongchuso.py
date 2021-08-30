t = int(input())


def func(a):
    sum = 0
    for i in a:
        sum += int(i)
    return sum


while t > 0:
    t -= 1
    n = int(input())
    List = [x for x in input().split()]
    print(*sorted(List, key=lambda x: (func(x), int(x))))
