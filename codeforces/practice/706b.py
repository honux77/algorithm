from sys import stdin, stdout
readline = stdin.readline
write = stdout.write

pn = int(input())
p = list(map(int, readline().rstrip().split()))
p.sort()

n = int(readline().rstrip())

ans = None

def search(i, l, r, arr):  
    global ans  
    if l > r: return
    s = (l + r) // 2
    # print(i, arr[s], s, l, r)
    if (i >= arr[s]):
        ans = s
        search(i, s + 1, r, arr)
    else:
        search(i, l, s - 1, arr)

for _ in range(n):    
     c = int(readline().rstrip())
     ans = -1
     search(c, 0, len(p) - 1, p)
     print(ans + 1)     
