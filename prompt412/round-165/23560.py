n = int(input())
r = []

for i in range(n):
    b = ['a', 'b', 'c']
    a = [str(i) + s for s in  b]
    r = r + a

d = {}
total = 0
print(r)

def eat(a, b):
    global total
    key = ",".join(a) + "::" + ",".join(b)    
    
    if key in d:
        # print("있음", key)
        return 0
    else:
        d[key] = True
    
    if len(b) == 0:
        # print("다 먹음", a)
        total += 1
        return
    
    # 점심
    if len(a) % 3 == 1: 
        if b[0][-1] == 'b' :
            eat(a + b[:1], b[1:])
        if b[-1][-1] == 'b':
            eat(a + b[-1:], b[:-1])

    #아저
    else:        
        if b[0][-1] == 'a' or b[0][-1] == 'c':
            eat(a + b[:1], b[1:])
        if b[-1][-1] == 'a' or b[-1][-1] == 'c':
            eat(a + b[-1:], b[:-1])



a = eat([], r)
print(total)

