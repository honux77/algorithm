t = int(input())

def solve(n, s):
    stack = []
    for c in s:
        if c == '(':
            stack.append(c)
        elif len(stack) > 0  and stack[-1] == '(':
            stack.pop()
        else:
            stack.append(c)
    # print("".join(stack))
    return len(stack) // 2
                

for _ in range(t):
    
    n = int(input())
    s = input()
    print(solve(n, s))
