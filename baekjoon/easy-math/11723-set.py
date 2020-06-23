n = int(input())

s = set()
import sys

for _ in range(n):
    l = sys.stdin.readline().rstrip()
    if 'all' in l:
        s = set(map(str,(range(1,21))));
        continue
    elif 'empty' in l:
        s = set()
        continue
    else:
        cmd, num = l.split()

    if cmd == 'add':
        s.add(num)
    elif cmd == 'remove' and num in s:
        s.remove(num)
    elif cmd == 'check':
        print(int(num in s))
    elif cmd == 'toggle':
        if num in s:
            s.remove(num)
        else:
            s.add(num)
