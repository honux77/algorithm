a, b, c = [int(input()) for _ in range(3)]
s = str(a * b * c)
for c in range(10):
    print(s.count(str(c))