a = int(input())
b = int(input())
c = int(input())

s = a + b + c
s = max(s, a * b * c)
s = max(s, (a + b) * c)
s = max(s, a + b * c)
s = max(s, a * b + c)
s = max(s, a * (b + c))
print(s)
