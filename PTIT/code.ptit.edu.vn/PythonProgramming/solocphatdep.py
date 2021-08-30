str = input()
n = len(str)


def check(str):
    for i in range(n):
        if str[i] == '6':
            continue
        elif str[i] == '8':
            if str[i-1:i+1] != '68' and str[i-2:i+1] != '688':
                return False
        else:
            return False
    return True


if check(str):
    print("YES")
else:
    print("NO")
