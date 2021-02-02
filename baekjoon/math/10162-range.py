t = int(input())
a = 5 * 60
b = 1 * 60
c = 10
ca = 0
cb = 0
cc = 0

if t % 10 != 0:
    print(-1)
else:
    ca = t // a
    t -= a * ca            
    cb = t // b
    t -= b * cb
    cc = t // c
    print(ca, cb, cc)
