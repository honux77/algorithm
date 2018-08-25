n, k = [int(i) for i in input().split(" ")]
word = input()

length = 0
allsame = True

f = word[0]
for w in word:
    if w != f:
        allsame =False

if allsame:
    ans = word
    for i in range(k - 1):
        ans += f
else:        
    for i in range(1, len(word) // 2 + 1):
        if word[:i] == word[-i:]:
            length = i

    ans = ""
    if length > 0:
        common = word[:-length]
    else:
        common = word

    for i in range(k):
        ans += common    

    if length > 0:
        ans += word[-length:]

print(ans)
