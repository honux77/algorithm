from sys import stdin
readline = stdin.readline

for _ in range(3):
    n = int(readline())
    sum = 0
    for _ in range(n):
        sum += int(readline())
    if sum == 0:
        print(0)
    elif sum > 0:
        print("+")
    else:
        print("-")
