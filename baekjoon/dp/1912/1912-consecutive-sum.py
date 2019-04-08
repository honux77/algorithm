n = int(input())
a = [int(i) for i in input().split()]

d = []
d.append(a[0])
res = d[0]

for i in range(1, len(a)):
    d.append(max(d[i - 1] + a[i], a[i]))
    res = max(d[i], res)
    print(res)

print(res)