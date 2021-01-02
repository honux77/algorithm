def check(pset, num):
    for i in range(1, len(num)):
        if num[:i] in pset:
            return True
    return False
    
def solution(n):    
    pset = set()
    for _ in range(n):
        pnum = f.readline().strip()
        pset.add(pnum)
    for pnum in pset:
        if check(pset, pnum):
            print("NO")
            return
    print("YES")

f = open(0)
c = int(f.readline())
for _ in range(c):
    n = int(f.readline())
    solution(n)
f.close()
    
