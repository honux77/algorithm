n = int(input())

sa = [1] * (n - 1) + [-1] * (n - 1)
b = [0] * (n + 1)

def bs(n, a):
    for i in range(1, n + 1):        
        b[i] = b[i - 1] * a[2 * i - 1] + a[2 * i] 
        if abs(b[i]) != i: return;

import random
while True:
    random.shuffle(sa)    
    t = [0] + sa + [-1, 1]
    bs (n, t)
    if b[n] == n:
        print(" ".join([str(i) for i in t[1:]]))
        break
