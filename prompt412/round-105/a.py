t = int(input())
def solve():
    n = int(input())
    total = 0
    score = 0
    for _ in range(n):
        s, c = map(float, input().split())
        total += int(s)
        score += c * s
    print("{} {:.1f}".format(total, score / total))


for _ in range(t):
    solve()
    