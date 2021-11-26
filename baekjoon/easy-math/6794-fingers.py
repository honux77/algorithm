a = int(input())

ans = 0
for x in range(1, 6):
    if 0 <= a - x <= 5 and x >= a - x:
        ans += 1
        print(x, a - x)

print(ans)