import sys

def solve(line):
    # m : # moskito
    # p : # pupa
    # l : # lava
    # e : # eggs per moskito
    # r : number of lava survived
    # s : number of pupa survived
    # n : nth week
    m, p, l, e, r, s, n = map(int, line.split())
    nm = 0
    for i in range(n):
        nm = p // s
        p = l // r
        l = m * e
        m = nm
    print(nm)


lines = sys.stdin.readlines()
for line in lines:
    solve(line)