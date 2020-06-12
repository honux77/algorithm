n = int(input())

def gcd(x, y):
    while True:
        z = x % y
        if z == 0:
            return y
        x = y
        y = z

def solve():
    sum = 0
    nums = list(map(int, input().split()))[1:]
    for i in range(len(nums)):
        x = nums[i]
        for y in nums[i + 1:]:
            r = gcd(x, y)
            sum += gcd(x, y)
    print(sum)

for i in range(n):
    solve()

