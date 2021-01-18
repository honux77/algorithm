import sys
fread = sys.stdin.readline
fwrite = sys.stdout.write

n = int(fread());
d = [-1] + list(map(int, fread().split()))

g = [[]]

def dfs(i, lv):    
    fwrite("{} {}\n".format(lv, i))
    for i in g[i]:
        dfs(i, lv + 1)

for i in range (1, n + 1):
    g.append([])
    if d[i] != 0:
        g[d[i]].append(i)        

for i in range (1, n + 1):
    if d[i] == 0:
        dfs(i, 0)
