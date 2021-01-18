from collections import deque

n = int(input())
q = deque([i for i in input()])

i = 0

# print(q)

while len(q) >= 2 and i <= len(q) - 2:
    if q[i] == q[i + 1]:
        if i == 0:
            q.popleft()

        else:
            del q[i]
        q[i] = '0' if q[i] == '1' else '1'
        i = 0
        # print(q)
    else:
        i += 1

print("".join(list(q)))
