a = list(map(int, input().split()))
n = min(a)
while True:
    b = [i for i in a if n % i == 0]
    if len(b) >= 3:
        print(n)
        break
    n += 1
