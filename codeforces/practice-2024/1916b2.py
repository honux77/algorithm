from sys import stdin, stdout
readline = stdin.readline
write = stdout.write

from math import gcd as gcd

n = int(input())

for _ in range(n):
    a, b = map(int, readline().split())
    if b % a == 0:
        print(b * b // a)
    else:
        print(a * b // gcd(a, b))

