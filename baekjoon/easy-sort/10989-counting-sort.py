a = [0] * 10001
f = open(0)
f.readline()
for l in f:
    num = int(l)
    a[num] += 1

for i in range(1, 10000 + 1):
    print("{}\n".format(i) * a[i], end = '')