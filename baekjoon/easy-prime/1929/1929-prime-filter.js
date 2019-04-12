const input = require('fs').readFileSync('/dev/stdin').toString().split(' ');
const pmin = Number(input[0]);
const pmax = Number(input[1]);

var findAllPrimes = function(pmin, pmax) {
	const p = []
	p[1] = false;
	p[2] = true;
	for (let i = 2; i <= pmax; i++) {
		if (p[i] === false) continue;
		p[i] = true;
		for(let j = i * 2; j <= pmax; j += i) {
			p[j] = false;
		}
	}
	for (let i = pmin; i <= pmax; i++) {
		if (p[i] === true) {
			console.log(i);
		}
	}
}

findAllPrimes(pmin, pmax);

