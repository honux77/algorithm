n = int(input())
arr = [int(i) for i in input().split(" ")]

maxc = 0
cc = 0
for i in range(len(arr) - 2):
    cc = 0
    for j in range(i, len(arr) - 1):
        if arr[j] * 2 >= arr[j + 1]:
            print(cc, j, arr[j], arr[j + 1])
            cc += 1
        else:
            print(arr)
            break
    maxc = max(maxc, cc)

print(maxc)