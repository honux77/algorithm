t = int(input())

x = 0
for _ in range(t):
    cmd = input()
    if '+' in cmd:
        x += 1
    else:
        x -= 1

print(x)
    