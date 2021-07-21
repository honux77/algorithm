def gcd(a, b):
    while b != 0:
        t = a % b
        a = b
        b = t    
    return a

def test():
    print(gcd(1, 10) == 1)
    print(gcd(2, 3) == 1)
    print(gcd(12, 24) == 12)
    print(gcd(21, 24) == 3)
test()