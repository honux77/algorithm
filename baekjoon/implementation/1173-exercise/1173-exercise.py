(n, m, M, T, R) = map(int, input().split())

x = m
ans = 0

while n > 0 and ans != -1:
    while n > 0 and x + T <= M:      
        ans += 1
        n -= 1  
        x += T    
    while n > 0 and x + T > M:
        if m + T > M:            
            ans = -1
            break
        ans += 1
        x = x - R if x - R > m else m

print(ans)