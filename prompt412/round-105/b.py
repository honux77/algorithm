a = list(map(int, input().split()))
b = list(map(int, input().split()))
ans = [0] * 3

t = max(a)

for i in range(3):
    t= min(a[i] / b[i], t)

for i in range(3):
    ans[i] = a[i] - t * b[i]

for i in ans:
    print(i, end=" ")
print()