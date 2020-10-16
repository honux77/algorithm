n, m = map(int, input().split())
do = {}
op = {}

import sys

for i in range(1, n + 1):
    poke = sys.stdin.readline().rstrip()    
    do[i] = poke 
    op[poke] = i

for _ in range(m):
    p = sys.stdin.readline().rstrip()
    if p.isdigit():
        sys.stdout.write(do[int(p)] + "\n")
    else:
        sys.stdout.write(str(op[p]) + "\n")        
