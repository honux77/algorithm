p = []
for i in range(5):
    p.append(int(input()))

print(min(p[:3]) + min(p[3:]) - 50)
