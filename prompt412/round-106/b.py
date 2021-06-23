degree = {}
degree[0] = degree[180] = True
h = 0
m = 0
for i in range(1, 720 + 1):
    m = (m + 6) % 360
    if (i % 12) == 0: h = (h + 6) % 360
    d = abs(m - h) % 180
    degree[d] = True
    # print(m, h, d)

from sys import stdin
for f in stdin:
    n = int(f.strip())
    if n in degree:
        print("Y")
    else:
        print("N")
