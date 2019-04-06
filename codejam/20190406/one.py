n = int(input())

def check4(num):
    i = 1
    while num != 0:
        d = num % 10
        if d == 4:
            return i
        num //= 10
        i *= 10
    return -1

for p in range(1, n + 1):
    r = int(input())
    x = 1
    while x < r:    
        step = check4(x)
        if step > 0:
            x += step
            continue        
        y = r - x
        if check4(y) > 0:
            x += 1
            continue            
        else:
            print("Case #{}: {} {}".format(p, x, y))
            break
            