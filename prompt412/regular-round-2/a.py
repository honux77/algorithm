import sys
sys.setrecursionlimit(10**6)
sread = sys.stdin.readline
swrite = sys.stdout.write

n = int(sread())
score = [0] + list(map(int, sread().split()))
boss = [0, 0] + list(map(int, sread().split()))
ans = 987654321

def dfs(n, curr):
    global ans
    curr += score[n]
    ans = min(ans, curr)
    if n == 1:
        return
    dfs(boss[n], curr)

for i in range(1, n + 1):
    dfs(i, 0)

print(ans)