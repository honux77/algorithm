n = int(input())
a = [input().split() for _ in range(n)]
cls = [[False] * n for _  in range(n)] 
score = []

for i in range(n):
    for j in range(n):
        if i == j: continue
        for k in range(5):
            if a[i][k] == a[j][k]: cls[i][j] = True

for stu in cls:
    score.append(sum(stu))
print(score.index(max(score)) +1)

