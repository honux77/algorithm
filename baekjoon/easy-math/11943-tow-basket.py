a = list(map(int, input().split()))
b = list(map(int, input().split()))
n1 = b[0] + a[1]
n2 = a[0] + b[1]
print(min(n1, n2))