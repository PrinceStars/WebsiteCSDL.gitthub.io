from typing import OrderedDict


t = int(input())


def func(x):
    return Dict[x]


while t > 0:
    t -= 1
    n = int(input())
    Dict = {}
    for i in range(n):
        x = int(input())
        if x in Dict:
            Dict[x] += 1
        else:
            Dict[x] = 1
    Value = 0
    Appear = 0
    for i in Dict:
        if Dict[i] > Appear:
            Appear = Dict[i]
            Value = i
        elif Dict[i] == Appear:
            if i < Value:
                Value = i

    print(Value)
