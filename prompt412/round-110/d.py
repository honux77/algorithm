d = [0, 1, 2]
l = 10 ** 100
while d[-1] <= l:
    d.append(d[-1] + d[-2])

def solve(a, b):
    print(len([i for i in d if a <= i <= b]))

while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0: break
    solve(a, b)