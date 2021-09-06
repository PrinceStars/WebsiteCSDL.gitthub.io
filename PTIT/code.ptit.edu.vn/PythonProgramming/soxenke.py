t = int(input())


def check(str):
    if len(str) % 2 == 0 or str[0] == str[1]:
        return False
    for i in range(2, len(str), 2):
        if str[i] != str[i-2]:
            return False
    return True


while t:
    t -= 1
    n = input()
    print("YES" if check(n) else "NO")
