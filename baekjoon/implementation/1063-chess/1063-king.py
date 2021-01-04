k, s, ns = input().split()
n = int(ns)

# return [r, c]
def findloc(s):
    r = int(s[1]) - 1
    c = 'ABCDEFGH'.index(s[0])
    return [r, c]

def getPos(s):
    r = s[0] + 1
    c = 'ABCDEFGH'[s[1]]
    return c + str(r)

def canMove(s, dr, dc):
    nr = s[0] + dr;
    nc = s[1] + dc;
    return nr >= 0 and nr < 8 and nc >= 0 and nc < 8
        
def nextStone(k, s, dr, dc):
    return k[0] + dr == s[0] and k[1] + dc == s[1]

def move(k, s, dr, dc):
    if canMove(k, dr, dc):
        if nextStone(k, s, dr, dc):
            if canMove(s, dr, dc):
                k[0] += dr
                k[1] += dc
                s[0] += dr
                s[1] += dc
        else:
            k[0] += dr
            k[1] += dc        

king = findloc(k);
stone = findloc(s);

cmd = {
    'R': [0, 1],
    'L': [0, -1],
    'B': [-1, 0],
    'T': [1, 0],
    'RT': [1, 1],
    'LT': [1, -1],
    'RB': [-1, 1],
    'LB': [-1, -1]
}

for _ in range(n):
    m = input()
    dr, dc = cmd[m]
    move(king, stone, dr, dc)    
    # print(king, stone)
    # print(getPos(king), getPos(stone))

print(getPos(king), getPos(stone))