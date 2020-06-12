def printStar(n, m):
    print(" " * n + "*" * m)
   
n = int(input())

for i in range(n -1):
    printStar(i, (n - i) * 2 - 1)
for i in range(n - 1, -1, -1):
    printStar(i, (n - i) * 2 - 1)
