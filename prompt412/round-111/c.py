t = int(input())

def solve():
    candy = 0
    x = input()
    r, c = map(int, input().split())
    a = []
    for _ in range(r):
        a.append(input())
    for i in range(r):
        for j in range(c - 2):
            if a[i][j] == '>' and a[i][j + 1] == 'o' and a[i][j + 2] == '<':
                candy += 1

    for i in range(r - 2):
        for j in range(c):
            if a[i][j] == 'v' and a[i + 1][j] == 'o' and a[i + 2][j] == '^':
                candy += 1
    
    print(candy)


for _ in range(t):
    solve()