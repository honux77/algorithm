while True:
    try:
        n, x = map(int, input().split())
        print(x // (n + 1))
    except:
        break
