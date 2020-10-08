from sys import stdin

n = int(stdin.readline())
d = {}

for i in range(n):
    p = stdin.readline().rstrip()
    if p in d:
        d[p] += 1
    else:
        d[p] = 1

for i in range(n - 1):
    p = stdin.readline().rstrip()
    d[p] -= 1
    if d[p] == 0: d.pop(p)

print(list(d.keys())[0])
