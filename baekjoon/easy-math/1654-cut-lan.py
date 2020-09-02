n, k = map(int, input().split())
lines = []

for i in range(n):    
    lines.append(int(input()))

left = 1
right = max(lines)

while left <= right:
    mid  = (left + right) // 2
    if sum([i // mid for i in lines]) >= k:
        ans = mid
        left = mid + 1
    else:
        right = mid - 1
print(ans)