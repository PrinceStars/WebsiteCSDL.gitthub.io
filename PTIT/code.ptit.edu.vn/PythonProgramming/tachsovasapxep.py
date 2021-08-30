from typing import List


n = int(input())
ListStr = []
for i in range(n):
    ListStr.append(input()+' ')

ListNum = []

for i in range(n):
    temp = ''
    for j in ListStr[i]:
        if j.isdigit():
            temp += j
        elif len(temp) > 0:
            ListNum.append(int(temp))
            temp = ''
ListNum.sort()
for i in ListNum:
    print(i)
