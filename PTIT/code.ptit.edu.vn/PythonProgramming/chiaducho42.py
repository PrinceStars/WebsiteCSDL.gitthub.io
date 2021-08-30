List = []
Set = set()
while len(List) < 10:
    for i in [int(x) for x in input().split()]:
        List.append(i)
        Set.add(i % 42)

print(len(Set))
