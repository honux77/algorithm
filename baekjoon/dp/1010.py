# https://www.acmicpc.net/problem/1010

n = int(input())

for _ in range(n):
    (n, m) = [int(i) for i in input().split()]
    ans = 1 

    for i in range(m - n + 1, m + 1):
        ans *= i
        
    for i in range(2, n + 1):
        ans //= i

    print(ans)

