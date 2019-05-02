d = [[0] * 101 for i in [0] * 101]

(n, m) = [int(i) for i in input().split()]
for i in range(n + 1):
    for j in range(i + 1):
        if j == 0 or j == i:
            d[i][j] = 1
        else:
            d[i][j] = d[i - 1][j - 1] + d[i - 1][j]
        # print(i, j, d[i][j])

print(d[n][m])