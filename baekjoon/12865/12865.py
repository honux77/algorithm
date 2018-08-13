(n, maxw) = [int(i) for i in input().split(' ')]

mat = [[0] * (maxw + 1) for _ in range(n + 1)]

for i in range(1, n + 1):    
    (w, v) = [int(i) for i in input().split(' ')]
    for j in range(1, maxw + 1):
        if j >= w:
            mat[i][j] = max(mat[i - 1][j], v + mat[i - 1][j - w])
        else:
            mat[i][j] = mat[i - 1][j]

print(mat[n][maxw])