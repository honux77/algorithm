n, m = map(int, input().split())
bb = list(map(int, input().split()))
for _ in range(m):
    a, b, c = map(int, input().split())
    if a == 1:
        bb[b - 1] = c
    elif a == 2:
        for i in range(b - 1, c):
            bb[i] = 1 if bb[i] == 0 else 0
    elif a == 3:
        for i in range(b - 1, c):
            bb[i] = 0
    else:
        for i in range(b - 1, c):
            bb[i] = 1
    # print(" ".join([str(i) for i in bb]))

print(" ".join([str(i) for i in bb]))
