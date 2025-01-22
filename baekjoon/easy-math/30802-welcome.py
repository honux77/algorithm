from math import ceil

n = int(input())
a = list(map(int, input().split()))
t, p = map(int, input().split())
bt = 0
for i in a:
    bt += ceil(i / t)

bp = sum(a) // p
br = sum(a) - bp * p

print(bt)
print(bp, br)
