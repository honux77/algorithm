n = int(input())

l = []
r = []
for i in range(n):
    a, b = [int(i) for i in input().split(" ")]
    l.append(a)
    r.append(b)

lmin = min(l)
rmax = max(r)
ans = 0
for i in range(n):
    ltemp = l[i]
    l[i] = lmin

    rtemp = r[i]
    r[i] = rmax

    lmax = max(l)
    rmin = min(r)
    d = rmin - lmax
    ans = max(d, ans)
    l[i] = ltemp
    r[i] = rtemp    

print(ans)