short = {}

def printShort1(word, i):
    words = word.split()
    words[i] = "[" + words[i][0] + "]" + words[i][1:]
    print(" ".join(words))

def printShort2(cmd, i):
    print(cmd[:i] + "[" + cmd[i] + "]" + cmd[i + 1:])

for i in range(ord('a'), ord('z') + 1):
    short[chr(i)] = False

n = int(input())
cmds = []
for _ in range(n):
    cmds.append(input())

for cmd in cmds:
    find = False
    words = cmd.split()

    for i in range(len(words)):
        c = words[i][0].lower()
        if not short[c]:
            short[c] = True
            printShort1(cmd, i)
            find = True
            break

    if find: continue

    for i in range(len(cmd)):
        c = cmd[i].lower()
        if c  == ' ': continue
        if not short[c]:
            short[c] = True
            find = True
            printShort2(cmd, i)
            break

    if not find:
        print(cmd)
