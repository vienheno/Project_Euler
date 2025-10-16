//Encuentre la suma de los primeros 2 millones de números primos.

let maxPrimes = parseInt(prompt ("Sumaremos los números menores a: "));
let prime = 1, countDiv = 0, sumPrime = 0;
do {
    prime++;
    for (let i = 2; i <= prime; i++) {
        if (prime % i === 0) countDiv++;
    }
    if (countDiv === 1) sumPrime += prime;   
    countDiv = 0;
} while (prime < maxPrimes);

alert ("La suma de los números primos menores a " + maxPrimes + " es: " + sumPrime);