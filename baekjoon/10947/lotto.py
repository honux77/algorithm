import random

a = range(1, 46)
random.shuffle(a)
ans = a[:6]
ans.sort()
print(" ".join(str(i) for i in ans))
