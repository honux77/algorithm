import math
n = int(input())

count = 0

if n >= 18:
    count = n // 18 * 2
n = n % 18

if n == 0:
    pass
elif n <= 9: 
    count += 1
elif n % 2 == 0:
    count += 2
else:
    count += 3
print(count)
