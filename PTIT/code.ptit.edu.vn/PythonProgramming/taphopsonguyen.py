from typing import Set


n, m = [int(x) for x in input().split()]

Set1 = set([int(x) for x in input().split()])
Set2 = set([int(x) for x in input().split()])


print(*sorted(Set1.intersection(Set2)))
print(*sorted(Set1.difference(Set2)))
print(*sorted(Set2.difference(Set1)))
