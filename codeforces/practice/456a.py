n = int(input())
t = [0] * (n + 1)
for _ in range(n):
    a, b = map(int, input().split())
    t[a] = b

for i in range(1, n):
    if t[i] > t[i + 1]:
        print("Happy Alex")
        break
else:
    print("Poor Alex")