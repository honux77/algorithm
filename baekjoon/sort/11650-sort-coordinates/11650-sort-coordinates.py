from operator import itemgetter

n = int(input())

a = []
for _ in range(n):
    a.append(tuple(map(int,input().split())))

a = sorted(a, key = itemgetter(1))
a = sorted(a, key = itemgetter(0))

for p in a:
    print(p[0], p[1])

