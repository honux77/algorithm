import sys

a = int(input())
b = int(input())
c = int(input())
m  = {}

for s in str(a * b * c):
    d = int(s)
    if d not in m:
        m[d] = 1
    else:
        m[d] += 1

for i in range(10):
    if i not in m:
        print("0")
    else:
        print(m[i])
