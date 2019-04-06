t = int(input())

for i in range(1, t + 1):
    size = int(input())
    cmd1 = input()
    cmd2 = []
    for c in cmd1:
        if c == 'E':
            cmd2.append('S')
        else:
            cmd2.append('E')
    
    ans = "".join(cmd2)
    print("Case #{}: {}".format(i, ans))