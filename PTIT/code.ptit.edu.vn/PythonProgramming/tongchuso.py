num = input()


def toString(Str):
    sum = 0
    # print(Str)
    for i in range(1, len(Str)):
        sum += int(Str[i])
    if Str[0] == '-':
        sum += ord('-') - ord('0')
    else:
        sum += int(Str[0])
    return str(sum)


count = 0
while len(num) >= 2:
    num = toString(num)
    count += 1

print(max(1, count))
