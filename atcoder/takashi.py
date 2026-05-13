import sys

n = int(input())
dishes = []
for i in range(n):
    dishes.append(input())

for i in range(1, n - 1):
    if dishes[i] == "sweet" and dishes[i - 1]== "sweet":
        print("No")
        sys.exit()
print("Yes")