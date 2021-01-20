import math
n = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
print(n - max(math.ceil(a / c), math.ceil(b / d)))