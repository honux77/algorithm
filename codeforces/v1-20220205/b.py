from operator import truediv


t = int(input())

def dzero(a, b):
    if a == b:
        return True
    if a > b and a % b == 0:
        return True
    elif b > a and b % a == 0:
        return True
    else:
        return False

def solve():
    a, b, c = map(int, input().split())
    print(a, b, c)
    d = abs(c - a)
    if a == b == c:
        print("YES")
    elif a == c and dzero(b, a):
        print("YES")            
    elif dzero(d, b):
        print("YES")
    else:
        print("NO")


for _ in range(t):
    solve()