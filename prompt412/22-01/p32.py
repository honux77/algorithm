import sys
fread = sys.stdin.readline
fwrite = sys.stdout.write
from collections import deque

n = int(fread())
s = fread()
st = deque()

def check():    
    while len(st) >=2 and st[-1] == st[-2]:
        a = st.pop()
        b = st.pop()
        st.append('1' if a == '0' else '0') 

for i in range(0, len(s)):   
    st.append(s[i]) 
    check()    

print("".join(list(st)))
