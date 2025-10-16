/*
Problema 16 de Project Euler (enunciado en español):

2^15 = 32768 y la suma de sus digitos es 3 + 2 + 7 + 6 + 8 = 26.
¿Cuál es la suma de los dígitos del número 2^1000?
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Función que multiplica strings numéricos por 2

string numeroDuplicado(string cifra)
{
    string digito;
    int lleva = 0;
    int multx2 = stoi(cifra)*2 + lleva;
    if (multx2 % 10 > 0) 
    {
        digito = to_string(multx2 % 10);
        lleva = 1;
    }
    else
    {
        digito = to_string(multx2);
        lleva = 0;
    }
    return digito;
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");

    int pot = 10;
    string resultado;
    for (int i = 1; i < pot; i++)
    {
        resultado = resultado + numeroDuplicado(to_string(i));
        
    }
    
    cout<<"2 elevado a la "<<pot<<" es: "<<resultado;
    return 0;
}
