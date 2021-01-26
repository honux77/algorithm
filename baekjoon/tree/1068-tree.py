n = int(input())

parent = [0] * 55
child = [[] for _ in range(55)]
visited = [False] * 55

v = list(map(int,input().split()))
r = int(input())
root = 0
ans = 0

def dfs(node):
    global ans
    if node == r: return
    if len(child[node]) == 0: ans += 1
    visited[node] = True
    for v in child[node]:
        if visited[v]: continue
        dfs(v)

def remove(r):
    for l in child:
        if r in l: l.remove(r)

for i in range(n):
    parent[i] = v[i]
    if parent[i] == -1:
        root = i
    else:
        child[parent[i]].append(i)


remove(r)
dfs(root)
print(ans)
