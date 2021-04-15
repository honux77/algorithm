import math

n = int(input())
m = int(input())
l = list(map(int, input().split()))

p = l.pop(0)
ans = p
c = p

while len(l) != 0:
    c = l.pop(0)
    ans = max(ans, math.ceil((c - p) / 2))
    # print(p, c, ans)
    p = c

ans = max(ans, n - c)
print(ans)
