n = int(input())
cols = [0] * n
total = 0

def nq(lv):
    global total, cols, n

    for i in range(n):
        valid = True
        for j in range(lv):
            if cols[j] == i or lv - j == abs(i - cols[j]):
                valid = False
                break
        if valid:
            if lv == n - 1:
                total += 1
                return
            cols[lv] = i
            nq(lv + 1)
    
nq(0)
print(total)

