a, b = input().split()
sum = 0
for i in a:
    for j in b:
        sum += int(i) * int(j)
print(sum)