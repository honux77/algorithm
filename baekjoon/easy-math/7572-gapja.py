# 2013년이 "F9"

c1 = "ABCDEFGHIJKL"
c2 = "0123456789"
curr = 2013 % 60
i = c1.index("F")
j = c2.index("9")

n = int(input()) % 60    
while n < curr:    
   n+= 1
   i-= 1
   j-= 1 
while n > curr:
    n -= 1
    i += 1
    j += 1

print(c1[i % 12]+ c2[j % 10])
