n = int(input())
a = [0, 1, 0, 0]

for _ in range(n):
    i, j = map(int, input().split())
    t = a[i]
    a[i] = a[j]
    a[j] = t

print(a.index(1))
