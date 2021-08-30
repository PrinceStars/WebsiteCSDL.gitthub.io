string1 = input()
string2 = input()
p = int(input())

print(string1[:(p-1)] + string2 + string1[(p-1):])
