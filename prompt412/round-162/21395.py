MAXNUM = 1000001
a = [True] * MAXNUM
primes = []
for i in range(2, MAXNUM):
    if a[i]:
        primes.append(i)
        for j in range (i * 2, MAXNUM, i):
            a[j] = False

t = int(input())

def binSearch(n):
    low = 0
    high = len(primes) - 1    
    while low <= high:
        i = (low + high) // 2
        if n == primes[i]:
            return i
        elif n > primes[i]:
            low = i + 1
        else:
            high = i - 1
    return i   

def convert(nums, i):    
    n = nums[0]  
    ans = 0  
    for n in nums:
        ans += abs(primes[i] - n)                
        i+=1    
    return ans
    

for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))

    nums.sort()
    idx = binSearch(nums[0])
    right = binSearch(nums[-1])

    if idx > len(primes) - n:
        idx = len(primes) - n

    ans = convert(nums, idx)
    for i in range(idx, min(len(primes) - n, right)):
        d = convert(nums, i)    
        if i == idx:
            ans = d
        ans = min(ans, d)
    
    print(ans)
