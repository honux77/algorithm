t = int(input())

def addNum(n, m):
    d1 = len(str(n))
    d2 = len(str(m))
    if d2 >= d1: return (0, m)
    x = ""
    while d1 > d2:
        x += "X"
        d1 -= 1
    return len(x), str(m) + x

def post(k, n):
    d = len(str(n))
    if d >= k: return str(n)
    zero = ""
    while k != d:
        zero += "0"
        k -= 1
    return zero + str(n)

def findNum(p, c):
    if c > p: return (0, c)    
    if c == p or len(str(p)) == len(str(c)): return (1, c * 10)    
    s1 = str(p)
    ans, s2 = addNum(p, c)
    maxNum = int(s2.replace("X", "9"))
    # print(ans, s2, maxNum)
    if p >= maxNum:
        return ans + 1, int(s2.replace("X", "0")) * 10
    ls = list(str(s2))
    for i in range(len(ls)):
        if ls[i] == 'X':
            ls[i] = s1[i]
    return ans ,(int("".join(ls)) + 1)  

def solve(t):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    for i in range(1, len(a)):        
        d, a[i] = findNum(a[i - 1], a[i])
        ans += d
        
    print("Case #{}: {}".format(t, ans))
       

for i in range(1, t + 1):
    solve(i)
