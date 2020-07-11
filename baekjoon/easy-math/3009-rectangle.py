px = 0
py = 0
for _ in range(3):
    (x, y) = list(map(int,input().split()))
    px ^= x
    py ^= y
print(px, py)