import sys
readline = lambda : sys.stdin.readline().strip()
readlineSplit = lambda : sys.stdin.readline().strip().split()

t = int(readline())

def enc(a, b, c):
    x = ord(c) - ord('A')
    return chr((a * x + b) % 26 + ord('A'))

def solve():
    a, b = map(int, readlineSplit())
    s = readline()
    ans = []
    for c in s:
        ans.append(enc(a, b, c))
    print("".join(ans))


for _ in range(t):
    solve()
