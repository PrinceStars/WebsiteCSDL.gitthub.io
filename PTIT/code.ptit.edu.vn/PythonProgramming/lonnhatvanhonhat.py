while 1:
    n = int(input())
    if n == 0:
        break
    List = []
    for i in range(n):
        List.append(int(input()))
    Sorted_List = sorted(List)
    if Sorted_List[0] == Sorted_List[-1]:
        print("BANG NHAU")
    else:
        print(Sorted_List[0], Sorted_List[-1])
