from itertools import combinations;
a = list(range(1, 11, 2))

for c in combinations(a, 3):
    print(c)

print("\n========my combination=========\n")
buf = []
def comb(off, k):
    global buf
    if (k == 0):
        print(buf)
        return
    
    for i in range(off, len(a) - k + 1):
        buf.append(a[i])
        comb(i + 1, k - 1)
        buf = buf[:-1]

comb(0, 3);