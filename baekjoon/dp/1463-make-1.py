n = int(input())
d = [0] * 10000000
d[1] = 0
for i in range(2, n + 1):
    v = d[i - 1]
    if i % 3 == 0:
        v = min(d[i // 3], v)
    if i % 2 == 0 :
        v = min(d[i // 2], v)
    d[i] = v + 1

print(d[n])