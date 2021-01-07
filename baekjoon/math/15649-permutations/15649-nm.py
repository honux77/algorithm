import sys
n, m = map(int, input().split())

from itertools import permutations

ns = list(range(1, n + 1))

ret = permutations(ns, m)

for r in ret:
    print(" ".join(map(str, r)))
    