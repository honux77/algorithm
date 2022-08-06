n = int(input())
inf = 1000000001
i = 1


def isPalindrome(n):
    if n < 9: return True
    a = list(str(n))
    s = 0
    e = len(a) - 1
    while s <= e:
        if a[s] != a[e]: return False
        s += 1
        e -= 1
    return True

def nSum(n):
    return sum(map(int, list(str(n))))

for i in range(1, inf):
    if isPalindrome(i) and nSum(i) == n:
        # print(i, n)        
        print(len(str(i)))
        break
