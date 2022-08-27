while True:
    a = list(map(int, input().split()))
    if len(a) == 1:
        break

    n = 1    
    for i in range(1, len(a), 2):
        n = n * a[i]
        n -= a[i + 1]
    print(n)
