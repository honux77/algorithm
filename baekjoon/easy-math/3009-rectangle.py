xs = set()
ys = set()

for _ in range(3):
    (x, y) = list(map(int,input().split()))
    if x in xs:
        xs.remove(x)
    else:
        xs.add(x)

    if y in ys:
        ys.remove(y)
    else:
        ys.add(y)

print(xs.pop(), ys.pop())