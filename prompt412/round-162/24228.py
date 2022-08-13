n, r = map(int, input().split())
if n == 1:
    print(r * 2)
elif r == 1:
    print(n + 1)
else:
    print((n + 1) + (r -1 ) * 2)
