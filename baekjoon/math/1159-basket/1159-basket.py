n = int(input())

p = {}
for _ in range(n):    
    f = input()[0]
    if f not in p:
        p[f] = 1
    else:
        p[f] += 1


ans = []

for (k, v) in p.items():
    if v >= 5: 
        ans.append(k)

ans.sort()

if len(ans) == 0:
    print("PREDAJA")
else:
    print("".join(ans))
    