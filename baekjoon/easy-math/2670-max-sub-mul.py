n = int(input())
a = []
for _ in range(n):
    a.append(float(input()))

m = a[0]
ans = a[0]

for i in a[1:]:
    m = max(i, m * i)
    ans = max(ans, m)
    
print("{:.3f}".format(ans))