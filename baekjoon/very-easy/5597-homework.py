a = [False] * 31
for _ in range(28):
    n = int(input())
    a[n] = True

for i in range(1, 31):
    if not a[i]: print(i)
