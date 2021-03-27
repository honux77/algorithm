t = int(input())
from itertools import permutations

def getCost(a):
    cost = 0
    for i in range(len(a) - 1):
        minv = min(a[i:])
        j = a.index(minv)
        cost += j - i + 1
        b = a[i:j + 1]
        b.reverse()
        a = a[:i] + b + a[j + 1:]
    return cost

def solve(t):
    find = False
    n, c = map(int, input().split())
    a = list(range(1, n + 1))
    ans = ""
    perm = permutations(a, n)
    for tup in perm:
        if c == getCost(list(tup)):
            find = True
            ans = " ".join(map(str, tup))
            break
    if find:
        print("Case #{}: {}".format(t, ans))
    else:
        print("Case #{}: {}".format(t, "IMPOSSIBLE"))
       

for i in range(1, t + 1):
    solve(i)
