def printHead(c):
    h1 = "..+" + "-+" * (c - 1)
    h2 = "." + ".|" * c
    h3 = "+" + "-+" * c
    print(h1)
    print(h2)
    print(h3)

def printBody(c):
    l1 = "|" + ".|" * c
    l2 = "+" + "-+" * c
    print(l1)
    print(l2)


def solve(t):
    print("Case #{}:".format(t))
    r, c = map(int, input().split())
    printHead(c)
    for i in range(r - 1):
        printBody(c)

t = int(input())

for i in range(1, t + 1):
    solve(i)
