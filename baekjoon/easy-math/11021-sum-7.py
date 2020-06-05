n = int(input())
for i in range(1, n + 1):
    tsum = sum(map(int, input().split()))
    print("Case #{}: {}".format(i, tsum))
    