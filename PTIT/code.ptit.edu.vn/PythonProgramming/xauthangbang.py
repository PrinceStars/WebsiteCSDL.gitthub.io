t = int(input())


def check(str1, str2):
    for i in range(1, len(str1)):
        if abs(ord(str1[i]) - ord(str1[i-1])) != abs(ord(str2[i]) - ord(str2[i-1])):
            return False
    return True


while t > 0:
    t -= 1
    string1 = input()
    string2 = ''.join(reversed(string1))

    if(check(string1, string2)):
        print("YES")
    else:
        print("NO")
