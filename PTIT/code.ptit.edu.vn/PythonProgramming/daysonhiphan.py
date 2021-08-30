t = int(input())
List = [x for x in input().split()]

count = 0

for i in range(t-1):
    if List[i] != List[i+1]:
        count += 1

print(count)
