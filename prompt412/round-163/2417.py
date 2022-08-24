from math import sqrt, floor
n = int(input())
x = floor(sqrt(n))
while x * x < n:
    x += 1

print(x)
