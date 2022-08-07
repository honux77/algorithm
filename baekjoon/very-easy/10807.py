n = int(input())
b = list(map(int, input().split()))
t = int(input())
print(len([i for i in b if i == t]))
