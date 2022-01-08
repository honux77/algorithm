import sys

def sword(s):
    return "".join(sorted(s))

def solve(n):
    words = []
    sdict = {}
    for _ in range(n):
        w = input()
        words.append(w)
        sw = sword(w)
        if sw not in sdict:
            sdict[sw] = 0
        else:
            sdict[sw] += 1
    
    mv = max(sdict.values())    
    
    for w in words:
        if sdict[sword(w)] == mv:
            print(w, mv)
            return    

while True:
    n = int(input())
    if n == 0: break
    solve(n)
