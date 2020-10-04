a = int(input())

def match(p):
    st = []
    for c in p:
        if c == '(':
            st.append(c)
        if c == ')':
            if len(st) == 0:
                print("NO")
                return
            else:
                st.pop(0)
    if len(st) == 0:
        print("YES")
    else:
        print("NO")  

for _ in range(a):
    p = input()
    match(p)