n = int(input())

s = [[0] * 10 for _ in range(n + 1)] 
s[1] = [0] + [1] * 9
mod = 1000 ** 3

for i in range(2, n + 1):
    for j in range(0, 9 + 1):
        if j >= 1:
            s[i][j] += s[i - 1][j - 1]

        if j <= 8:
            s[i][j] += s[i - 1][j + 1]

print(sum(s[n]) % mod)