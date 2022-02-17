n, t = map(int, input().split())
if t == 10:
    if n == 1:
        print("-1")
    else:
        print("1" + "0" * (n - 1))
else:
    print(str(t) * n)