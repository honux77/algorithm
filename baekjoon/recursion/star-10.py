n = int(input())

a = [[" "] * n for i in range(n)]

def fill(n, i, j):        
    if n == 3:
        a[i+ 0][j + 0] = "*"
        a[i+ 0][j + 1] = "*"
        a[i+ 0][j + 2] = "*"
        a[i+ 1][j + 0] = "*"
        a[i+ 1][j + 2] = "*"
        a[i+ 2][j + 0] = "*"
        a[i+ 2][j + 1] = "*"
        a[i+ 2][j + 2] = "*"
        return    
    
    d = n // 3
    fill(n // 3, i + 0, j + 0)
    fill(n // 3, i + 0, j + d)
    fill(n // 3, i + 0, j + 2 * d)
    fill(n // 3, i + d, j + 0)
    fill(n // 3, i + d, j + 2 * d)
    fill(n // 3, i + 2 * d, j + 0)
    fill(n // 3, i + 2 * d, j + d)
    fill(n // 3, i + 2 * d, j + 2 * d)

fill(n, 0, 0)

for i in range(n):
    print("".join(a[i]))
        
