t = int(input())


def solve():
    import math

    """
    p3    p4

    p1    p2
    """

    p = []
    for _ in range(4):
        p.append(list(map(int, input().split())))

    p1 = p[0]
    p2 = [p for p in p if p1[0] != p[0] and p1[1] == p[1]][0]
    p3 = [p for p in p if p1[0] == p[0] and p1[1] != p[1]][0]

    h = abs(p1[0] - p2[0])
    w = abs(p3[1] - p1[1])
    print(h * w)


for _ in range(t):
    solve()
