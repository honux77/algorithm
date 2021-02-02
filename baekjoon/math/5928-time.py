d, h, m = map(int, input().split())
t = (((d - 11) * 24 + h) - 11) * 60 + m - 11
if t < 0: t = -1
print(t)
