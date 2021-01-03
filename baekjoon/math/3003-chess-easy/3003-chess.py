import sys
mine = list(map(int, input().split()))
ans = [1, 1, 2, 2, 2, 8]
for i in range(len(ans)):
    print("{} ".format(ans[i] - mine[i]), end='')

print();