x = 1000000
d = [0, 1, 0]

find = False
l = 2
while not find:
    d[2] = (d[0] + d[1]) % x 
    l += 1
    if d[-1] == 1 and d[-2] == 0:
        print(l - 2) 
        break
    d[0] = d[1]
    d[1] = d[2]
