n = int(input())
d = [[0,0,0]]
for i in range(1, n + 1):
    (r, g, b) = [int(i) for i in input().split()]    
    dr = r + min(d[i - 1][1], d[i - 1][2])
    dg = g + min(d[i - 1][0], d[i - 1][2])
    db = b + min(d[i - 1][0], d[i - 1][1])
    d.append([dr, dg, db])    

print(min(d[n]))
