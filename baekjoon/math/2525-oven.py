h, m = map(int, input().split())
t = int(input())

h2 = t // 60
m2 = t % 60

m = m + m2
h = h + h2
if m >= 60:
    m -= 60
    h += 1

h %= 24

print(h, m)