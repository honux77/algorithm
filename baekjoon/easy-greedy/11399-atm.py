n = int(input())
a = list(map(int, input().split(" ")))
a.sort()
for i in range(1, len(a)):
    a[i] += a[i - 1]
print(sum(a))
