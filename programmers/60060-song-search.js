class TrieNode {
    constructor() {        
        this.children = {};  
        this.count = 0;        
    }
}

let root = {};
let rev = {};

function insert(root, word) {
    let len = word.length;
    let curr = root;
    for (let w of word) {
        curr.count += 1;        
        if (!curr.children[w]) {            
            curr.children[w] = new TrieNode();
        }
        curr = curr.children[w];        
    }
}

function search(root, word) {
    let curr = root;
    if (!root) return 0;
    for (let w of word) {
        if (w === '?') return curr.count;
        if (!curr.children[w]) return 0;
        curr = curr.children[w];
    }
}

function solution(words, queries) {
    var answer = [];
    for (const word of words) {
        if (!root[word.length]) root[word.length] = new TrieNode();
        insert(root[word.length], word);

        if (!rev[word.length]) rev[word.length] = new TrieNode();
        insert(rev[word.length], word.split('').reverse().join(''));
    }

    for (query of queries) {        
        if (query[0] === '?') {
            query = query.split('').reverse().join('');
            answer.push(search(rev[query.length], query));
        } else {
            answer.push(search(root[query.length], query));
        }
    }
    return answer;
}

input = ["frodo", "front", "frost", "frozen", "frame", "kakao"];
query = ["fro??", "????o", "fr???", "fro???", "pro?"];
ans = solution(input, query);
console.log(ans);
console.dir(root);
console.dir(rev);
