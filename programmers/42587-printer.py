def check(item, q):
    # item(loc, prio)
    for i in q:
        if i[1] > item[1]:
            return True
    return False

def solution(prio, loc):
    q = []
    ans = 0
    for i in range(len(prio)):
        # (loc, prio)                 
        q.append((i, prio[i]));
    
    while True:
        item = q.pop(0)        
        if check(item, q):
            q.append(item)
        else:
            ans += 1
            if item[0] == loc:
                return ans
