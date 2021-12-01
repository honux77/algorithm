while True:
    a = list(map(int, input().split()))
    if sum(a) == 0: break
    if a[0] == 0: a[0] = a[3] // a[1] // a[2]
    if a[1] == 0: a[1] = a[3] // a[0] // a[2]
    if a[2] == 0: a[2] = a[3] // a[0] // a[1]
    if a[3] == 0: a[-1] = a[0] * a[1] * a[2]
    print(" ".join(str(e) for e in a))
