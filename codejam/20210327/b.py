t = int(input())

def solve(t):
    a = input().split()
    cj = int(a[0])
    jc = int(a[1])
    art = a[2].replace('?','')
    cost = 0
    for i in range(len(art) - 1):
        if art[i: i + 2] == "CJ": cost += cj
        if art[i: i + 2] == "JC": cost += jc
    
    print("Case #{}: {}".format(t, cost))
       
for i in range(1, t + 1):
    solve(i)
