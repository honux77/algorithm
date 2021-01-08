import math
n = int(input())
times = map(int, input().split())

py = 10 # 30 / 10
pm = 15 # 60 / 15
y = 0
m = 0

for t in times:
    y += math.ceil((t + 1) / 30) * py
    m += math.ceil((t + 1) / 60) * pm

if y < m:
    print("Y {}".format(y))
elif m < y:
    print("M {}".format(m))
else:
    print("Y M {}".format(y))
