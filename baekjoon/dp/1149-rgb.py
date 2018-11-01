n = int(input())
d = [[0, 0, 0]] * (n + 1)
for i in range(1, n + 1):
    (r, g, b) = [int(i) for i in input().split()]
    d[i][0] = r + min(d[i - 1][1], d[i - 1][2])
    d[i][1] = g + min(d[i - 1][0], d[i - 1][2])
    d[i][2] = b + min(d[i - 1][0], d[i - 1][1])

print(min(d[n]))