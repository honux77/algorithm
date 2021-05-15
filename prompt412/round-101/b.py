t = int(input())

def solve():
    lb_kg = 2.2046
    kg_lb = 0.4536
    g_l = 0.2642
    l_g = 3.7854    
    a = input().split()    
    n = float(a[0])
    u = a[1]  
    n2 = 0
    u2 = ''  
    if u == 'kg':
        print("{:.4f} {}".format(n * lb_kg, 'lb'))

    if u ==  'lb':
        print("{:.4f} {}".format(n * kg_lb, 'kg'))
    if u == 'g':
        print("{:.4f} {}".format(n * l_g, 'l'))
    if u == 'l':
        print("{:.4f} {}".format(n * g_l, 'g'))

for _ in range(t):
    solve()