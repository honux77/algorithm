n = int(input())

ans = 0
for _ in range(n):
    a = int(input()[2:])
    if a <= 90:
        ans += 1

print(ans)