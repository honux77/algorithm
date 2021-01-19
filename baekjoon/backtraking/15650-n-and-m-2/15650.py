from itertools import combinations
n, m = map(int, input().split())
a = combinations(range(1, n + 1), m)
for c in a:
    print(" ".join([str(i) for i in c]))
