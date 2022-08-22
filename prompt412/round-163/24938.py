n = int(input())
a = list(map(int, input().split()))
t = sum(a) // n
b = [(i - t) for i in a]
cost = 0
for i in range(len(b) - 1):
    cost += abs(b[i])
    b[i + 1] += b[i]

# print(b)
print(cost)
