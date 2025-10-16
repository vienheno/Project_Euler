//La suma de los cuadrados de los primeros 10 números naturales es 385.
//La suma de los 10 primeros números enteros, elevado al cuadrado es 3025.
//Si calculamos la diferencia de esos 2 reultados dará: 3025 - 385 = 2640
//Hacer el mismo cálculo pero con los primeros 100 numeros naturales.

let suma = 0, sumaCuadrados = 0, diferencia;
let cantidad = prompt("Digite la cantidad de los primeros números naturales: ")

for (let i = 1; i <= cantidad; i++) {//for para la suma de cuadrados
    sumaCuadrados += i**2;
    suma += i; 
}

diferencia = suma**2 - sumaCuadrados;

alert ("La diferencia de la suma de los primeros " + cantidad + " numeros naturales al cuadrado, y la suma de los cuadrados de los primeros " + cantidad + " numeros naturtales es: " + diferencia)

