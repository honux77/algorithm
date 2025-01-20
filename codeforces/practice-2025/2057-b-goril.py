def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    cnt = [1]
    
    for i in range(1, n):
        if a[i] == a[i-1]:
            cnt[-1] += 1
        else:
            cnt.append(1)
    
    cnt.sort()
    ans = len(cnt)
    for i in range(len(cnt)):
        if cnt[i] > k:
            print(ans - i)
            return
        k -= cnt[i]
    print(1)

t = int(input())
for _ in range(t):
    solve()
    