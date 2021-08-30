t = int(input())

for j in range(t):
    str1 = input()
    str2 = input()

    str1 = ''.join(sorted(str1))
    str2 = ''.join(sorted(str2))

    print("Test {0}: {1}".format(j+1, 'YES' if str1 == str2 else 'NO'))
