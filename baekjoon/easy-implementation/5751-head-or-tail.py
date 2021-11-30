while True:
    n = int(input())
    if n == 0:
        break
    a = map(int, input().split())
    m = 0
    j = 0
    for i in a:
        if i == 0:
            m += 1
        else:
            j += 1
    print("Mary won {} times and John won {} times".format(m, j))
