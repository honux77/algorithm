b = [False] + [i == 'Y' for i in list(input())]

def turnOff(b, i):
    step = i
    while i < len(b):
        b[i] = not b[i]
        i += step 

ans = 0
for i in range(1, len(b)):
    if b[i]:
        ans += 1
        turnOff(b, i)        

print(ans)    