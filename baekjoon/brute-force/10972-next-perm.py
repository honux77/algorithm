import sys

n = int(input())
a = list(map(int, input().split()))
for i in range(n - 2, -1, -1):
    if a[i] < a[i + 1]:
        break
else:
    print(-1)
    sys.exit(0)

j = n - 1
while a[i] >= a[j]:
    j -= 1

a[i], a[j] = a[j], a[i]

i += 1
j = n - 1

while i < j:
    a[i], a[j] = a[j], a[i]    
    i += 1
    j -= 1

print(" ".join(map(str, a)))
