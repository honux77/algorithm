a = input()
b = input()

d = [[0] * (len(a) + 1) for _ in range(len(b) + 1)]
ans = 0

for i in range(1, len(b) + 1):
    for j in range(1, len(a) + 1):
        if b[i - 1] == a[j - 1]:
            d[i][j] = d[i - 1][j - 1] + 1
        else:
            d[i][j] = max(d[i][j - 1], d[i - 1][j])

        ans = max(ans, d[i][j])

for arr in d:
    print(arr)

print(ans)
