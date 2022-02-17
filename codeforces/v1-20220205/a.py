t = int(input())

def solve(n, a):    
    print(max(a) - min(a))

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))    
    solve(n , a)
