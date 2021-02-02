n = int(input())
s = input().split()
c = s[0][0]

able = True
for w in s:
    if w[0] != c:
        able = False
        break

if able:
    print(1)
else:
    print(0)