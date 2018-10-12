def findTower(s, i):
    temp = []
    res = 0;
    while len(s) != 0:
        n = s.pop()
        temp.append(n)
        if (n > i):
            res = len(s) + 1
            break            

    while len(temp) != 0:
        s.append(temp.pop())

    s.append(i)
    return res

def solution(heights):
    stack1 = []
    ans = []
    for i in heights:
        ans.append(findTower(stack1, i))
    return ans
