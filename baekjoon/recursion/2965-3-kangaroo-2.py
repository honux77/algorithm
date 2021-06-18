a, b, c= map(int, input().split())

def solve(a, b, c, d):
    print(a, b, c, d)
    if a + 2 == c:
        return d
    if b - a > c - b:
        return solve(a, b - 1, b, d + 1)
    else:
        return solve(b, c - 1, c, d + 1)

n = solve(a, b, c, 0)
print(n)