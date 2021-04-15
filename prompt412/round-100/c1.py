n = int(input())
m = int(input())
l = list(map(int, input().split()))

pos = 0
ans = 1
cl = 0

while len(l) != 0:
    cl = l.pop(0)
    ans = max(ans, cl - pos)
    pos = max(pos, cl + ans - 1)
    print(cl, ans, pos)

if pos < n - 1:
    ans = max(ans, n - cl)

print(ans)
