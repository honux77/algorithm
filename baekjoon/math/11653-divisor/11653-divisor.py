import sys
n = int(input())

i = 2
while i <= n:
    if n % i == 0:
        sys.stdout.write("{}\n".format(i))
        n //= i
    else:
        i += 1
