board = []
ans = 0
for i in range(8):
    rows = input()
    for j in range(8):
        if (i + j) % 2 == 0 and rows[j] == 'F':
            ans += 1
        
print(ans)
