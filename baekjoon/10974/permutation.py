n = int(input())

ret = []
def permutation(a, d, n, r):
    if r == 0:
        ret.append(" ".join([str(i)for i in a[:d]]))
        return
    
    for i in range(d, n):
        a[d], a[i] = a[i], a[d]
        permutation(a, d + 1, n, r - 1)
        a[d], a[i] = a[i], a[d]

a = list(range(1, n + 1))
permutation(a, 0, len(a), len(a))
ret.sort()
for num in ret:
    print(num)

