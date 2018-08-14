#!/bin/python3

# https://www.hackerrank.com/challenges/coin-change/problem
import math
import os
import random
import re
import sys

# Complete the getWays function below.
def getWays(n, c):
    d = [1] + [0] * n

    for j in c:
        for i in range(n - j + 1):
            d[i + j] += d[i]
    return d[n]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    nm = input().split()
    n = int(nm[0])
    m = int(nm[1])
    c = list(map(int, input().rstrip().split()))

    # Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    ways = getWays(n, c)
    fptr.write(str(ways))
    fptr.close()
