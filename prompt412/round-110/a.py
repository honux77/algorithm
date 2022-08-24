n = int(input())

p = {}
for i in range(32):
    p[2 ** i] = True

if n in p:
    print(1)
else:
    print(0)
