def solution(skill, skill_trees):
    answer = len(skill_trees)
    for s in skill_trees:
        a = []    
        for c in s:
            if c in skill:
                a.append(c)
        for i in range(len(a)):
            if a[i] != skill[i]:
                answer -= 1
                break
    return answer
    