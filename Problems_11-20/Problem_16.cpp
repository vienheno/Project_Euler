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

string numeroDuplicado(string num_srt)
{
    int tam = num_srt.length() - 1, cifra_int = 0, cifrax2, lleva = 0;
    string cifra_srt;

    for (int i = tam; i >= 0 ; i--)
    {
        cifra_srt = num_srt[i];
        cifra_int = stoi(cifra_srt);
        cifrax2 = cifra_int*2 + lleva;

        if (cifrax2 < 10)
        {
            num_srt.replace(i, 1, to_string(cifrax2)); //reemplazamos el resultado de la cifra en la misma posicion de num_srt
            lleva = 0;
        } else
        {   
            num_srt.replace(i, 1, to_string(cifrax2 % 10)); 
            lleva = 1;
        }       
    }
    
    if (cifrax2 > 9)
    {
        num_srt = "1" + num_srt;
        tam = tam + 1;
    }
    
    return num_srt;
}

int sumaCifras (string numeroString)
{
    int digito_int = 0, suma = 0;
    string digito_srt;
    
    for (int i = 0; i < numeroString.length(); i++)
    {
        digito_srt = numeroString[i];
        digito_int = stoi(digito_srt);
        suma = suma + digito_int;
    }
    
    return suma;
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");

    int pot = 0;
    string resultado = "1";
    
    cout<<endl<<"Ingrese la potencia de 2: ";
    cin>>pot;

    for (int i = 1; i <= pot ; i++) resultado = numeroDuplicado(resultado);

    //cout<<endl<<"El resultado de 2 elevado a la "<<pot<<" es "<<resultado;
    cout<<endl<<"La suma de cifras del resultado de 2 elevado a la "<<pot<<" es "<<sumaCifras(resultado)<<endl<<endl;
    
    return 0;
}
