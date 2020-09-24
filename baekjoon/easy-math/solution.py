import sys
n = int(input())

def checkGen(a, b):
    s = a
    while a != 0:
        d = a % 10
        s += d
        a //= 10
    return s == b

for i in range(1, n):
    if checkGen(i, n):
        print(i)
        sys.exit(0)

print(0)
