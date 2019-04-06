t = int(input())

import math

def solve(t):
    _, l = [int(i) for i in input().split()]      
    nums = [int(i) for i in input().split()]  
    ptable = {}
    rnums = []

    for i in range(l):
        if i == 0:
            second = math.gcd(nums[i], nums[i + 1])
            first = nums[0] // second
            rnums.append(first)
            rnums.append(second)
            ptable[first] = '@'
            ptable[second] = '#'
        else:
           prime = nums[i] // rnums[i]
           rnums.append(prime)
           if prime not in ptable:
               ptable[prime] = '*'

    cha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    sp = sorted(ptable.keys())    

    for i in range(len(sp)):
        ptable[sp[i]] = cha[i]
    
    ans = ""
    for p in rnums:
        ans +=ptable[p]

    print("Case #{}: {}".format(t, ans))

for i in range(1, t + 1):
    solve(i)