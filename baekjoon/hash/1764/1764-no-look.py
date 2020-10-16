import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

d = set()
for _ in range(n):
    man = sys.stdin.readline().rstrip()
    d.add(man)

count = 0
ans = []
for _ in range(m):
    man = sys.stdin.readline().rstrip()
    if man in d:
        count += 1
        ans.append(man)

ans.sort()

print(count)
for man in ans:
    sys.stdout.write(man + "\n")
