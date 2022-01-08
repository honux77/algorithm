import sys

t = int(input())

def solve():
    q, k = map(int, sys.stdin.readline().split())
    print(q, k)
    for _ in range(q):
        cmd = sys.stdin.readline().strip()
        print(cmd)

for _ in range(t):
    solve()