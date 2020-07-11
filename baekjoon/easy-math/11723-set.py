import sys

# set
s = [0] * 20

def all():
    global s
    for i in range(0, 20):
        s[i] = 1

def empty():
    global s
    for i in range(0, 20):
        s[i] = 0

def add(n):
    s[n - 1] = 1

def remove(n):
    s[n - 1] = 0

def check(n):
    print(int(s[n - 1] == 1))

n = int(input())

for _ in range(n):
    l = sys.stdin.readline().rstrip()
    # print(l, s)
    if 'all' in l:
        all()
        continue
    elif 'empty' in l:
        empty()
        continue
    else:
        cmd, num = l.split()
        num = int(num)

    if cmd == 'add':
        add(num)
    elif cmd == 'remove':
        remove(num)
    elif cmd == 'check':
        check(num)
    elif cmd == 'toggle':
        if s[num - 1] == 1:
            remove(num)
        else:
            add(num)
