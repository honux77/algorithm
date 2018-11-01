def solution(answers):
    mans = [
        [1, 2, 3, 4, 5],
        [2, 1, 2, 3, 2, 4, 2, 5],
        [3, 3, 1, 1, 2, 2, 4, 4, 5, 5],        
    ]    
    counts = []
    for man in mans:
        c = 0        
        for (i, ans) in enumerate(answers):        
            c = c + 1 if man[i % len(man)] == ans else c
        counts.append(c)
        
    max_score = max(counts)   
    res = []
    for i, count in enumerate(counts):
        if count == max_score:
            res.append(i + 1)
    return res