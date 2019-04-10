n = int(input())

words = {}

for i in range(n):
    words[input()] = 1

def compare(x, y):
    if x == y:
        return 0
    elif len(x) != len(y):
        return len(x) - len(y)
    elif x < y:
        return -1
    else:
        return 1
    

import functools 
cmp = functools.cmp_to_key(compare)
dedup = list(words.keys())
dedup.sort(key=cmp)

for w in dedup:
    print(w)
