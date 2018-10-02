# https://programmers.co.kr/learn/courses/30/lessons/42576

def solution(participant, completion):
    cdict = {}    
    for p in completion: 
        if p not in cdict:
            cdict[p] = 1
        else:
            cdict[p] += 1
    
    for p in participant:
        if p not in cdict or cdict[p] == 0:
            return p
        else:
            cdict[p] -= 1
    return "honux"
           