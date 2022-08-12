d = {}
d["A"] = 4
d["B"] = 3
d["C"] = 2
d["D"] = 1
d["F"] = 0
d["+"] = 0.3
d["0"] = 0
d["-"] = -0.3

a = input()
if len(a) == 1:
    print("0.0")
else:
    score = d[a[0]] + d[a[1]]
    print("{:.1f}".format(score))
