n, l = map(int, input().split())

a = list(map(int, input().split())) 
a.sort()

d = max(a[0], l - a[-1])
for i in range(1, len(a)):
    d = max(d, (a[i] - a[i - 1]) / 2)
print(d)
