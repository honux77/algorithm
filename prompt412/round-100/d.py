n, t = map(int, input().split())
cows = [0] + list(map(int, input()))

tt = []

for _ in range(t):
    tt.append(tuple(map(int, input().split())))

tt.sort(key=lambda x:x[0], reverse = True)

for t in tt:
    if cows[t[2]] == 0:
        cows[t[1]] = 0

for i in range(len(cows)):
    