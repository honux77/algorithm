t = int(input())

def solve(t):
    n = int(input())
    a = list(map(int, input().split()))
    cost = 0
    for i in range(len(a) - 1):
        minv = min(a[i:])
        j = a.index(minv)
        cost += j - i + 1
        b = a[i:j + 1]
        b.reverse()
        a = a[:i] + b + a[j + 1:]
        # print(a)
    print("Case #{}: {}".format(t, cost))
       

for i in range(1, t + 1):
    solve(i)
