s = input()
n = int(input())
i = 0
j = 0
ans = []
types = input().split()
for t in types:
    size = 0    
    if t == 'char':
        size = 2
    elif t == 'int':
        size = 8
    else:
        size = 16        
    j += size
    ans.append(str(int(s[i:j], 16)))
    i = j

print(" ".join(ans))
        