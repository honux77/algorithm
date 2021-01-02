(n, b, w) = [int(i) for i in input().split(' ')]
road = input()

wc = 0
bc = 0
maxLen = 0
left = 0
length = 0

for c in road:
    length += 1

    if c == 'W':
        wc += 1
    else:
        bc += 1
    
    while bc > b:
        r = road[left]        
        if r == 'W':
            wc -= 1
        else:
            bc -= 1   
        left += 1 
        length -= 1
        
    if wc >= w and length > maxLen:
        maxLen = length  
    # print(c, wc, bc, length)
print(maxLen)