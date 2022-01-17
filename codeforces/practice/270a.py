def solve():
    n = int(input())
    if 360 % (180 - n) == 0:
        print("YES")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    solve()
