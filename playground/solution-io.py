from sys import stdin, stdout
readline = stdin.readline
write = stdout.write

a, b = map(int, readline().rstrip().split())
write("{} {}\n".format(a, b))
