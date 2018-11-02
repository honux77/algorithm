n = int(input())
cols = [0] * n
total = 0

def check(row, col):
    global cols
    for i in range(row):
        if cols[i] == col or abs(cols[i] - col) == row - i:
            return False    
    return True

def nq(row, col):
    global total, cols, n
    cols[row] = col
    
    if row == n - 1:
        total += 1
        # print(cols)
        return
    
    for c in range(n):
        if check(row + 1, c):
            nq(row + 1, c)

for i in range(n):
    nq(0, i)

print(total)

