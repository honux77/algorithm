from sys import stdin, stdout
readline = stdin.readline
write = stdout.write

h, x = map(int, readline().rstrip().split())

r = 10 ** 9 + 7
delta = 1
ans = 0

for i in range(h):
    delta *= x
    n = int(readline().rstrip())
    ans = (ans + n * delta) % r  

write("{}\n".format(ans))
