'''
2 * n 타일링 문제
'''

n = int(input())

d = [0] * (n + 1)
d[0] = 1
d[1] = 1

for i in range(2, n + 1):
    d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007

print(d[n])
