from typing import Dict


t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    Dict = {}
    count = 0
    if n % 2 == 0:
        while n % 2 == 0:
            count += 1
            n //= 2
        Dict[2] = count
    i = 3
    while i < n:
        count = 0
        while n % i == 0:
            count += 1
            n //= i
        if count != 0:
            Dict[i] = count
        i = i + 2
    if n != 1:
        Dict[n] = 1
    print("1 ", end='')
    for i in Dict:
        print('* ' + str(i) + '^' + str(Dict[i]), end=' ')
    print()
