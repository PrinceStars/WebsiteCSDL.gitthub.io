n = int(input())

List = [float(x) for x in input().split()]

List.sort()

l = 1
r = n - 2
Sum = sum(List)
while List[l] == List[l-1]:
    l += 1

while List[r] == List[r+1]:
    r -= 1
Res = (Sum - (l)*List[0] - (n-r-1)*List[n-1]) / (r-l+1)
print('%.2f' % Res)
