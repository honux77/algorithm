a, b = map(int, input().split())

t = 0
s = 0
while a != 0:
    t += a
    s += a
    a = s // b
    s = s % b           
print(t)