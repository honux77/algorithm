import math
n, k = map(int, input().split())
if k <= math.ceil(n / 2):
    print(2 * k - 1)
else:
    print(2 * (k - math.ceil(n / 2)))