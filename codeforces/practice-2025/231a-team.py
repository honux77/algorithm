n = int(input())

ans = 0
for _ in range(n):
    t = sum(map(int, input().split()))    
    if t >= 2:
       ans += 1

print(ans)
