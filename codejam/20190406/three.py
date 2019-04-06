t = int(input())

def solve(t):
    nmax, size = [int(i) for i in input().split()]      
    nums = [int(i) for i in input().split()]  
    prime = {}
    rnums = []

    for i in range(size):
        if i == 0:
            for j in range(3, nmax + 1, 2):
                if nums[i] % j == 0:            
                    rnums.append(j)
                    rnums.append(nums[i]//j)                    
                    prime[j] = prime[nums[i] // j] = True
                    break
        elif i == 1:
            if nums[i] % rnums[0] == 0:
                rnums[0], rnums[1] = rnums[1], rnums[0]
            
            p = nums[i] // rnums[i]
            prime[p] = True
            rnums.append(p)
        else:
            p = nums[i] // rnums[i]
            prime[p] = True
            rnums.append(p)

    cha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    sp = sorted(prime.keys())    
    for i in range(len(sp)):
        prime[sp[i]] = cha[i]
    
    ans = []
    for p in rnums:
        ans.append(prime[p])

    print("Case #{}: {}".format(t, "".join(ans)))

for i in range(1, t + 1):
    solve(i)


