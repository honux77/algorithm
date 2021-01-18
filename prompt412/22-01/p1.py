import sys

n = int(input())

ans = 0
a, b = map(int, sys.stdin.readline().split())

for _ in range(n - 1):
    c, d = map(int, sys.stdin.readline().split())    
    ans += a * d + b * c
    a, b = a + c, b + d    

print(ans)    
