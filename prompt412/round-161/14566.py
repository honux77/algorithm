a = int(input())
b = list(map(int, input().split()))
b.sort()
dist = []
for i in list(range(1, len(b))):
    dist.append(b[i] - b[i - 1])

minDist = min(dist)
d = [i for i in dist if i == minDist]
print(minDist, len(d))
