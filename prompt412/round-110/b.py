n = int(input())
p = []
for _ in range(n):
    s = list(map(int, input().split()))
    p.append(s)

for i in range(n):
    s = 0
    for j in range(3):
        for k in range(n):
            if i == k: continue
            if p[i][j] == p[k][j]:
                break
        else:
            s += p[i][j]            
    print(s)
