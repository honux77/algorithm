import sys

def sgcd(a, b):
    while b != 0:
        temp = a % b
        a = b
        b = temp
    return a

v  = set()

def slcm(a, b):
    return a * b // sgcd(a, b)

def add(d, m):
    size = m // d
    for i in range(d):
        v.add(size * i)

d1, d2 = map(int, input().split())
m = d1

for i in range(d1, d2 + 1):
    m = slcm(m, i)

for i in range(d1, d2 + 1):
    add(i, m)

print(len(v))