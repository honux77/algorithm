n = int(input())

def makeNum(arr):
    while arr[0] == 0:
        arr = arr[1:]
    return "".join([str(i) for i in arr])


for p in range(1, n + 1):
    r = input()
    n1 = []
    n2 = []
    for c in r:
        x = int(c)
        if x == 4:
           n1.append(2)
           n2.append(2)
        else:
            n1.append(x)
            n2.append(0)  
    
    num1 = makeNum(n1)
    num2 = makeNum(n2)
    print("Case #{}: {} {}".format(p, num1, num2))           
