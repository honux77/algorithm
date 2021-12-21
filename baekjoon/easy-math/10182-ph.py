from math import log10

n = int(input())

for _ in range(n):
    c, d, n = input().split()
    n = float(n)
    if c == 'H':
        print("{:.2f}".format(-log10(n)))
    if c == 'OH':
        print("{:.2f}".format(14 + log10(n)))