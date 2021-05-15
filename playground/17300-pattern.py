l = int(input())
a = map(int, input().split())
s = [None] * 10
v = [False] * 10
for i in range(0, 3):
    for j in range(0, 3):
        s[i * 3 + j + 1] = (i, j) 

