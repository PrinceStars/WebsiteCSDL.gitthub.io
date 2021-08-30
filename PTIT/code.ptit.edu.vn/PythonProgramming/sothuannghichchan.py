t = int(input())

while t > 0:
    t -= 1
    n = int(input())
    queue = []
    queue.append('2')
    queue.append('4')
    queue.append('6')
    queue.append('8')

    while 1:
        a = queue.pop(0)
        num = int(a + ''.join(reversed(a)))
        if num < n:
            print(num, end=' ')
        else:
            break
        for i in range(0, 9, 2):
            queue.append(a + str(i))
    print()
