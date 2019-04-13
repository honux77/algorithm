const inputs = require('fs').readFileSync('input.txt').toString().split('\n').map(x=>Number(x));
const primes = [false, false];
const nmax = 123456 * 2;

for (let i = 2; i <= nmax; i++) {
    if (primes[i] === false) {
        continue;
    }
    primes[i] = true;
    for (let j = i * 2; j <= nmax; j += i) {
        primes[j] = false;
    }
}

inputs.forEach(num => {
    if (num === 0) {
        process.exit(0);
    }
    let pcount = 0;    
    for (let i = num + 1; i <= num * 2; i++) {
        if (primes[i] === true) {            
            pcount++;
        }
    }
    console.log(pcount);
});
