w1 = input()
w2 = "z" * len(w1)

def make(i, j): 
    global w1
    global w2   
    p1 = w1[:i][::-1]
    p2 = w1[i:j][::-1]
    p3 =  w1[j:][::-1]
    nw = p1 + p2 + p3    
    if nw < w2: w2 = nw
    return nw

from itertools import combinations
for (i, j) in combinations(range(1,len(w1)), 2):        
    print(i, j, make(i, j))
        
print(w2)