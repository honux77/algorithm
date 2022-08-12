h1, m1, s1 = map(int,input().split(":"))
h2, m2, s2 = map(int,input().split(":"))

c = h1 * 3600 + m1 * 60 + s1
m = h2 * 3600 + m2 * 60 + s2

if c > m: m += 24 * 3600
d = m - c

s = d % 60
d //=  60
m = d % 60
h = d // 60
print("{:02d}:{:02d}:{:02d}".format(h,m,s))
