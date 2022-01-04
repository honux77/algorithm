s = input()
w = list("hello")
i = 0

hello = False;
for i in s:
    if i == w[0]:
        w = w[1:]
    if len(w) == 0:
        hello = True
        break

if hello:
    print("YES")
else:
    print("NO")
