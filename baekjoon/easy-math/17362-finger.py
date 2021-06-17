n = int(input()) % 8
if n == 0:
    print(2)
elif n <= 5: 
    print(n)
else:
    print(10 - n)
