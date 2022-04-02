def solve(t):
    ok = False
    ink = []
    ans = []
    tot = 1000000
    
    for i in range(3):        
        ink.append(list(map(int, input().split())))
    for i in range(4):
        m = min(ink[0][i], ink[1][i], ink[2][i]);
        ans.append(m)
    
    if sum(ans) >= tot:
        ok = True
        for i in range(4):
            diff = sum(ans) - tot
            if diff == 0:
                break
            if diff > ans[i]:
                ans[i] = 0
            else:
                ans[i] -= diff



    if (ok):
        print("Case #{}: ".format(t) + " ".join([str(i) for i in ans]))
        # print(sum(ans))
    else:
        print("Case #{}: IMPOSSIBLE".format(t))

t = int(input())
for i in range(1, t + 1):
    solve(i)
