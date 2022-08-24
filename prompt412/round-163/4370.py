import sys
b = "Baekjoon wins."
d = "Donghyuk wins."

lines = sys.stdin.readlines()

a = [9]


def add(a, n):
    while a[-1] < n:
        if len(a) % 2 != 0:
            a.append(a[-1] * 2)
        else:
            a.append(a[-1] * 9)


def bsearch(a, n):
    if n < 9:
        return 0
    left = 0
    right = len(a) - 1
    while left <= right:
        idx = (left + right) // 2
        if a[idx - 1] < n <= a[idx]:
            return idx
        if n > a[idx]:
            left = idx + 1
        else:
            right = idx - 1
    return idx


for line in lines:
    n = int(line)
    add(a, n)
    i = bsearch(a, n)
    # print(n, a)
    # print(i)
    if i % 2 == 0:
        print(b)
    else:
        print(d)
