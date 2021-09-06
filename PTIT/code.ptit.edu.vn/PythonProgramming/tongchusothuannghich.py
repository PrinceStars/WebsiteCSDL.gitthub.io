t = int(input())


def check(num):
    return num == num[::-1] if len(num) > 1 else False


while t:
    t -= 1
    num = input()
    Sum = sum(list(map(int, num)))
    print("YES" if check(str(Sum)) else "NO")
