n = int(input())
num = 1
count = 0

for i in range(2, n + 1):
    num *= i
    if num % 10 == 0:
        num //= 10
        count += 1

print(count)