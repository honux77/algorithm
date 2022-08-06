def printPal(n, num, start, d):
    if n == 0: 
        if sum(map(int, list(num))) == d:
            print(len(num))
            exit(0)            
        return 
        
    ret = num

    if n == 1:
        if not start:
            ret = num + "0";
            printPal(n - 1, ret, False, d)
        for i in range(1, 10):
            ret = num + str(i)
            printPal(n - 1, ret, False, d)
        return

    if not start:
        ret = num + "00";                
        printPal(n - 2, ret, False, d)

    for i in range(1, 10):
        ret = num + str(i) + str(i)        
        printPal(n - 2, ret, False, d)
        

d = int(input())
i = 1
while True:
    printPal(i, "", True, d)
    i += 1


