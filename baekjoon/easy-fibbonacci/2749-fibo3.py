d = 1000000
t = 1500000

n = int(input()) % t

u = 0 
v = 1

if t == 0:
    print(0)
elif t == 1:
    print(1)
else:
    for i in range(2, n + 1):
        w = (u + v) % d
        u = v
        v = w

print(v)
