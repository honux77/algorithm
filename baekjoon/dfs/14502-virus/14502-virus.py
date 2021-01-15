n, m = map(int, input().split())

a = []

for i in range(n):
    a.append(list(map(int, input().split())))

dr= [0, 0, 1, -1]
dc = [1, -1, 0 , 0]

def dfs(ia, r, c):
    for i in range(4):
        nr = r + dr[i]
        nc = c + dc[i]
        if 0 <= nr < n and 0 <= nc < m and ia[nr][nc] == 0:
            ia[nr][nc] = 2        
            dfs(ia, nr, nc)

def zcnt(ia):
    ans = 0
    for r in ia:
        ans += r.count(0)     
    return ans

# def show(a):
#     for c in a:
#         print(c)
#     print("====================\n")

ans = 0
def solve(c):
    global ans
    if c == 3:
        ia = [r[:] for r in a]
        for i in range(n):
            for j in range(m):
                if ia[i][j] == 2:
                    dfs(ia, i, j)
        ans = max(ans, zcnt(ia))          
        return

    for i in range(n):
        for j in range(m):
            if a[i][j] == 0:
                a[i][j] = 5
                solve(c + 1)
                a[i][j] = 0

solve(0)
print(ans)
