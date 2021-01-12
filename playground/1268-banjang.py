n = int(input())
a = []
score = [0] * n
for _ in range(n):
    a.append(input().split())

for i in range(n):
    for j in range(n):
        if i == j: continue
        for k in range(n):
            if a[i][k] == a[j][k]: score[i] += 1

print(score)
print(score.index(max(score)) + 1)
