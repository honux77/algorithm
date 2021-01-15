s, d = map(int, input().split())

find = False

for a in range(1001):
    b = s - a
    if b >= 0 and a - b == d:
        print(a, b)
        find = True
        break

if not find:
    print(-1)