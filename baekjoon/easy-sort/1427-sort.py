s=input()

ndict = {}

for c in s:
    if c in ndict:
        ndict[c] += 1
    else:
        ndict[c] = 1

ret = []
nkey = sorted(ndict.keys(), reverse=True);

for k in nkey:
    for _ in range(ndict[k]):
        ret.append(k)

print("".join([str(i) for i in ret]))