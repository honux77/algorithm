def solve(i, n):
    s = str(n)
    o = 0
    if "8" in str(n) or "9" in s:
        o = 0
    else:
        o = int(s, 8)
    h = int(s, 16)
    print('{} {} {} {}'.format(i, o, n, h))

t = int(input())

for _ in range(t):
    i, n = map(int, input().split())
    solve(i, n)
