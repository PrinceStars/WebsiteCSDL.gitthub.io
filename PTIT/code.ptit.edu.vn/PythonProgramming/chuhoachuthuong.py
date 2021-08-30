str = input()
hoa, thuong = 0, 0
for i in range(len(str)):
    if str[i].islower():
        thuong += 1
    elif str[i].isupper():
        hoa += 1
if hoa > thuong:
    print(str.upper())
else:
    print(str.lower())
