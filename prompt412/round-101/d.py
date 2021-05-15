def b26(a):
    c = 0
    x = 1      
    while a >= x:
        c += 1
        a -= x;
        x *= 26;    
    s = []    
    for i in range(c):
        s.insert(0, chr(ord('A') + a % 26))        
        a = a // 26
    return "".join(s)

def printExcel(r, c):
    print(b26(c) + str(r))

while True:
    a = input()
    i = a.index('C')
    r = int(a[1:i])
    c  = int(a[i + 1:])
    if r == 0 and c == 0: break
    printExcel(r, c)
