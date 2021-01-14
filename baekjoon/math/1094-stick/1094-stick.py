a = [64]
x = int(input())

while sum(a) != x:
    short = min(a)
    a.remove(short)    
    h = short // 2
    a.append(h)
    if sum(a) < x:
        a.append(h)
 
print(len(a))
