var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split('\n');
var iidx = 0;
function next() {
	return input[iidx++];
}

function solve(n) {
	if (n == 1) {
		console.log("YES");
		return;
	}

	var a = []
	for (var i = 0; i < n; i++) {
		a.push(next());
	}

	a.sort();	

	for (var i = 1; i < n; i++) {
		if (a[i - 1] === a[i].slice(0, a[i - 1].length)) {
			console.log("NO");
			return;
		}
	}
	console.log("YES");
}

var c = Number(next());
while (c--) {
	var n = Number(next());
	solve(n);
}
