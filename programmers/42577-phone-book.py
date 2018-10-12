pset = set()

def check(num):
    global pset
    for i in range(1, len(num)):
        if num[:i] in pset:
            return True
    return False

def solution(pb):    
    for string in pb:
        pset.add(string)
    for string in pb:
        if check(string):
            return False
    return True

