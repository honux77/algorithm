import sys
n = int(input())

s = []
for _ in range(n):
    s.append(tuple(map(int, sys.stdin.readline().rstrip().split())))

s = sorted(s, key = lambda a: a[0])
s = sorted(s, key = lambda a: a[1])

ans = 0
e = 0
for i in s:
    if i[0] >= e:
        ans += 1
        e = i[1]        
print(ans)