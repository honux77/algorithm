n = int(input())
m = list(map(int, input().split()))
m.sort()
ans = 0

if n % 2 != 0:
    ans = m[-1] 
    m.pop()

i = 0
j = len(m) - 1
while i < j:    
    ans = max(ans, m[i] + m[j])
    i += 1
    j -= 1

print(ans)