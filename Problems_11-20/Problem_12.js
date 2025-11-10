/*
La secuencia de números triangulares es: 1, 3, 6, 10, 15, 21, 28, 36, 45,...
Divisores de los números triangulares
1: 1
3: 1, 3
6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28

Observamos que 28 es el primer número triangular que tiene 5 divisores.
¿Cúal es el primer número triangular que tiene 500 o más divisores?
 */

let numTriangle = 1, ratio = 2, countDiv = 0;

let maxDiv = prompt("¿Cual es la cantidad mínima de divisores?: ")
while (true) {
    //alert(numTriangle)
    for(let i = 1; i <= numTriangle; i++){
        if (numTriangle % i === 0) countDiv++;
    }
    if (countDiv > maxDiv) break;
    numTriangle += ratio;
    ratio++;
    countDiv = 0;
}

alert("El primer número que tiene más de " + maxDiv + " es " + numTriangle)
