def solve(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    curr = 1
    ans = 0
    for i in range(n):
        if a[i] >= curr:
            ans += 1
            curr += 1

    print("Case #{}: {}".format(t, ans))

t = int(input())
for i in range(1, t + 1):
    solve(i)
