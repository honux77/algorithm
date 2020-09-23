from collections import deque

a = deque(range(1, int(input()) + 1))

while True:
    if len(a) == 1:
        break
    a.popleft()
    a.append(a.popleft())    

print(a[0])