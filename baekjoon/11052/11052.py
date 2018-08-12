'''
백준 11052 붕어빵 판매하기
DP 
'''

n = int(input())
p = [0] + [int(i) for i in input().split(' ')]
ans = [0] * (n + 1)

for i in range(1, n + 1):
    for j in range(1, i + 1):
        ans[i] =  max(ans[i], p[j] + ans[i - j])
        # print(i, j, ans)

print(ans[n])
