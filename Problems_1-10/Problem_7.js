let qPrime = prompt("Qué posicion de número primo deseas ver?: ")
let count = 0, prime = 1, qDivisor = 0;

do {
    prime++;

    for (let i = 2; i <= prime; i++) {
        if (prime%i === 0) qDivisor++;
    }
    
    if (qDivisor === 1) {
        //alert(prime);
        count++;
    }

    qDivisor = 0;
} while (count < qPrime);

alert ('El número primo en la posición ' + qPrime + ' es ' + prime)
