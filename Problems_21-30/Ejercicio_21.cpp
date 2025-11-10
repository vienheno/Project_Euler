/* 
Problema 21 — Números amistosos: Para un número n, sea d(n) la suma de sus divisores propios (excluyendo n).
Si d(a) = b, d(b) = a y a != b, entonces a y b forman un par amistoso. Encuentra la suma de todos los números amistosos menores de 10000.
*/

#include <iostream>
#include <string>
using namespace std;

int sumaDivisores (int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++) if (numero % i == 0) suma += i;     
    return suma;
}

bool numerosAmistosos (int numero_a) {
    int numero_b = sumaDivisores(numero_a);

    if (numero_a == sumaDivisores(numero_a)) return false;
    else if (numero_a == sumaDivisores(numero_b)) return true;
    else return false;
}

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");

    int sumaAmistosos = 0, numero_a = 10000;

    for (int i = 2; i < numero_a; i++) if (numerosAmistosos(i) == true) sumaAmistosos += i;     
    
    cout<<"La suma de los números amistosos menores a "<<numero_a<<" es igual a: "<<sumaAmistosos<<endl<<endl;

    return 0; 
    
}
