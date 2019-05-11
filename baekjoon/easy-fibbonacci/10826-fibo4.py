n = int(input()) 

u = 0 
v = 1

if n == 0:
    print(0)
elif n == 1:
    print(1)
else:
    for i in range(2, n + 1):
        w = u + v
        u = v
        v = w
    print(v)
