n = int(input())
g = list(map(int, input().split()))
g.sort()
a = 0
b = len(g)- 1
c = 0

while g[b] == 4 and b >= 0:    
    c += 1
    b -= 1

while g[b] == 3 and b >= 0:
    if g[a] == 1:
        a += 1
        b -= 1
        c += 1
    else:
        b -= 1
        c += 1

s = 0
for i in g[a: b + 1]:
    s += i

import math
c += math.ceil(s / 4)
print(c)
