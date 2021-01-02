import math

rr, x, y = list(map(int, input().split()))
r = math.sqrt(x * x + y * y)
print(math.ceil(rr * x // r), math.ceil(rr * y // r))