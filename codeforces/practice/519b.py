n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

def check(a, b):
    dictB = {}
    for i in b:
        if i not in dictB:
            dictB[i] = 1
        else:
            dictB[i] += 1 
    for i in a:
        if i in dictB and dictB[i] > 0:
            dictB[i] -= 1
        else:
            print(i)
            return

check(a, b)
check(b, c)

