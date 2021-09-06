t = int(input())


def GCD(a, b):
    return a if b == 0 else GCD(b, a % b)


while t:
    t -= 1
    n = input()
    print("YES" if GCD(int(n), int(n[::-1])) == 1 else "NO")
