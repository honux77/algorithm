(n, b, w) = [int(i) for i in input().split(' ')]
road = input()

wc = 0
bc = 0
maxLen = 0
walk = []

for c in road:
    walk.append(c)
    if c == 'W':
        wc += 1
    else:
        bc += 1
    while bc > b:
        r = walk[0]
        walk = walk[1:]
        if r == 'W':
            wc -= 1
        else:
            bc -= 1        
    if wc >= w and len(walk) > maxLen:
        maxLen = len(walk)  
    # print(c, walk, wc, bc, maxLen)
print(maxLen)