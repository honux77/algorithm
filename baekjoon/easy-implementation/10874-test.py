n = int(input())

ans = []
for i in range(n):
    s = list(map(int, input().split()))    
    for j in range(len(s)):
        if s[j] != (j) % 5 + 1:
            break           
    else:
        ans.append(i + 1)

for i in ans:
    print(i)
