s = input()
ans = [-1] * 26
a = ord('a')

for i in range(len(s)):
    if ans[ord(s[i]) - a] == -1:
        ans[ord(s[i]) - a] = i

print(" ".join(map(str,ans)))
