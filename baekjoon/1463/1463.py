n = int(input())

d = {}

d[1] = 0
def solution(n):
    if n in d:
        return d[n]

    d[n] = solution(n - 1) + 1

    if (n % 2 == 0):
        d[n] = min(solution(n / 2) + 1, d[n])
    
    if (n % 3 == 0):
        d[n] = min(solution(n / 3) + 1, d[n])

    return d[n]

print(solution(n))