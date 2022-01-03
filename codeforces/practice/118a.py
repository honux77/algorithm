vo = "aoyeuiAOYEUI"

s = input()
o = []
for c in s:
    if c not in vo:
        o.append('.')
        o.append(c)
print("".join(o).lower())
