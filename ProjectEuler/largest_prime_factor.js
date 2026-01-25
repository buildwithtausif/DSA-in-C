function isPrime(num) {
    if (num <= 1) {
        return 0; // false
    }

    if (num === 2) {
        return 1; // true
    }

    for (let i = 2; i * i <= num; i++) {
        if (num % i === 0) {
            return 0; // false
        }
    }

    return 1; // true
}
let n = 600851475143;
let index = 0;
let divisorArray = [];

console.log(`Prime Factors of ${n} are:`);

for (let i = 2; i <= n; i++) {
    if (isPrime(i) && n % i === 0) {
        divisorArray[index] = i;
        n /= i;
        console.log(divisorArray[index]);
        index++;
    }
}