str = input()

if len(str) % 3 == 1:
    str = '00' + str
if len(str) % 3 == 2:
    str = '0' + str

for i in range(0, len(str), 3):
    print(int(str[i:i+3], 2), end='')
