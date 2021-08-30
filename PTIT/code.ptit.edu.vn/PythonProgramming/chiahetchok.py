from typing import Sized


a, k, n = [int(x) for x in input().split()]
have = False
for i in range((a//k + 1)*k, min((n//k + 1)*k + 1, n+1), k):
    have = True
    print(i-a, end=' ')
if have is False:
    print(-1)
