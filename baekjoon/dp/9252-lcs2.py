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

lcs = []
curr = ans
i = len(b) - 1
j = len(a) - 1

print(ans)

# for arr in d:
#     print(arr)

while len(lcs) != ans:
    if b[i] == a[j] and d[i + 1][j + 1] == curr:
        # print(i, j, curr, b[i])
        lcs.append(b[i])
        i -= 1
        j -= 1
        curr -= 1
        continue
    else:
        if d[i][j + 1] > d[i + 1][j]:
            i -= 1
        else:
            j -= 1        

if ans != 0:
    lcs.reverse()
    print("".join(lcs))
