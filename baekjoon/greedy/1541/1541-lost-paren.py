from queue import Queue
l = input()

num = Queue()
op = Queue()
t = []
for c in l:
    if c.isdigit():
        t.append(c)
    else:
        num.put(int("".join(t)))
        t.clear()
        op.put(c)

if len(t) != 0:
    num.put(int("".join(t)))

ans = num.get()

minus = False

while not op.empty():
    o = op.get()
    if minus:
        ans -= num.get()
    elif o == '-':
        minus = True
        ans -= num.get()    
    else:
        ans += num.get()

print(ans)
