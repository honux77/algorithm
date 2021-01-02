import sys
a = int(input()) // 100 * 100
b = int(input())

for i in range(0, 100):
    # sys.stderr.write("{} {}\n".format(a, i))
    if (a + i) % b ==  0:
        print("{:02d}".format(i))
        break
