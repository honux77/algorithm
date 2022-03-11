t = int(input())

def solve(n, k):
    return k + (k - 1) // (n - 1);
    

for _ in range(t):
    n, k = map(int, input().split())
    print(solve(n, k))