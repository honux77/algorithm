n, t = map(int,input().split())

ans = -1
find = False
def check(num, n, t):
    global find
    global ans
    if find: return
    if n == 0 and num % t == 0:
        ans = num
        find = True
        return
    for i in range(1, 10):
        if str(i) not in str(num):
            check(num * 10 + i, n - 1, t)

check(0, n, t)
print(ans)