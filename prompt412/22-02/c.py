s = 0

while True:
    s += 1
    n = int(input())

    if n == 0:
        break

    names = ["None"]

    for _ in range(n):
        names.append(input())

    check = [0] * (n + 1)

    for _ in range(2 * n - 1):
        data = input().split()
        num = int(data[0])
        check[num] += 1

    for i in range(1, n + 1):
        if check[i] == 1:
            print(s, names[i]) 
