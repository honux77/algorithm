import sys
n = int(input())
b = list(map(int, input().split()))

dd = {}
for i in range(len(b)):
    dd[i + 1] = b[i]

board = []

def find(depth, ref): 
    for i in sorted(dd.keys()):
        if i in dd and dd[i] == ref:            
            board.append("{} {}".format(depth, i))
            del dd[i]
            find(depth + 1, i)
 
def addBoard(bid, ref):
    if ref == 0:
        board.append("{} {}".format(0, bid))
        del dd[bid]
        find(1, bid)

for i in range(1, n + 1):
    if i in dd:
        addBoard(i, dd[i])
    

for a in board:
    sys.stdout.write(a +"\n")