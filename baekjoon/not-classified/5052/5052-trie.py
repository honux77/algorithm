class Trie:

    def __init__(self):
        self.next = [None] * 10
        self.end = False

    def insert(self, pnum):
        curr = self
        for n in pnum:
            idx = int(n)
            if curr.next[idx] is None:
                curr.next[idx] = Trie()
            curr = curr.next[idx]
        curr.end = True

    def find(self, pnum):
        curr = self
        for n in pnum:
            if curr.end:
                return True
            idx = int(n)
            curr = curr.next[idx]
        return False

    
def solution(n):    
    trie = Trie()
    pb = []
    for _ in range(n):
        pnum = f.readline().strip()
        pb.append(pnum)
        trie.insert(pnum)

    for pnum in pb:
        if trie.find(pnum):
            print("NO")
            return
    print("YES")

f = open(0)
c = int(f.readline())
for _ in range(c):
    n = int(f.readline())
    solution(n)
f.close()
    
