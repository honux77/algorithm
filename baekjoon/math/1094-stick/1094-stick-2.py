x = int(input())
a = []
n = 64

while x != 0:
    if n > x:
        n //= 2
    else:
        x -= n
        a.append(n)

print(len(a))
