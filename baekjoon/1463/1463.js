var n = Number(require('fs').readFileSync('/dev/stdin').toString());
d = []
d[1] = 0

var solution = function(n) {
    console.log(n);
    if (d[n] !== undefined) {
        return d[n];
    }

    d[n] = solution(n - 1) + 1;

    if (n % 2 === 0){
        d[n] = Math.min(solution(n / 2) + 1, d[n]);
    }
    if (n % 3 === 0){
        d[n] = Math.min(solution(n / 3) + 1, d[n]);
    }
    return d[n];
}
console.log(solution(n));