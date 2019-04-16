t = int(input())

visit = None
sequence = None

def dfs(x, y, r, c, dist):
    global visit, sequence
    visit[x][y] = True
    # print(x, y, dist)
    # print(visit)
    sequence[x][y] = dist
    if dist == r * c - 1:
        return True

    for nx in range(r):
        for ny in range(c):
            if visit[nx][ny] or nx == x or ny == y or ((nx - ny) == (x - y)) or ((nx + ny) == (x + y)):
                continue
            if dfs(nx, ny, r, c, dist + 1):
                return True
    visit[x][y] = False
    return False   

def ainit(r, c, v):
    ret = []
    for _ in range(r):
        ret.append([False] * c)
    return ret

def printAnswer(r, c):
    a = [None] * (r * c)
    for i in range(r):
        for j in range(c):
            a[sequence[i][j]] = (i + 1, j + 1)
    for i,j in a:
        print(i,j)

def solve():
    global visit, sequence
    r, c = [int(i) for i in input().split()]
    for i in range(r):
        for j in range(c):            
            visit = ainit(r, c, True)
            sequence =  ainit(r ,c, 0)
            # print("Entry point: {}, {}".format(i,j))
            ret  = dfs(i, j, r, c, 0)
            if ret:
                print("POSSIBLE")
                printAnswer(r, c)
                return      
    print("IMPOSSIBLE")
    
 
for i in range(1, t + 1): 
    print("Case #{}: ".format(i), end='')
    solve()