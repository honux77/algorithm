n = int(input())
d = list(map(int, input().split()))
d.sort()
print(d[0] * d[-1])
