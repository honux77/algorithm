n = int(input())
a = list(map(int, input().split()))

def gcd(a, b):
    while b != 0:
        c = a % b
        a = b
        b = c
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

n = a[0]
for i in a:
    n = lcm(i, n)

print(n)