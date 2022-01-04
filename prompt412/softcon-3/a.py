n = int(input())

d = {}
l = -pow(10, 12)
r = pow(10, 12)
def solve(k, v, step, n):
    if n in d or k < l or k > r:
        return
    if k in d and v >= d[k]:
        return
    d[k] = v
    solve(k + step, v + 1, 2 * step, n)
    solve(k - step, v + 1, 2 * step, n)
    
if n == 0:
    print(0)
elif n % 2 == 0:
    print(-1)
else:
    solve(0, 0, 1, abs(n))
    if abs(n) in d:
        print(d[abs(n)])
    else:
        print(-1)