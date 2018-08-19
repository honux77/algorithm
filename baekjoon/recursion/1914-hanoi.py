n = int(input())

def hanoi(source, target, size):
    if size == 1:
        print("{} {}".format(source, target))
        return
    
    other = 6 - source - target
    hanoi(source, other, size - 1)
    print("{} {}".format(source, target))
    hanoi(other, target, size - 1)
    
print(2 ** n - 1)
if n <= 20:
    hanoi(1, 3, n)