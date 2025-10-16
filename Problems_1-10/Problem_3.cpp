/*
Los factores primos de 13195 son 5 , 7 , 13 y 29 . ¿Cuál es el factor primo más grande del número 600851475143 ?
*/

#include <iostream>
using namespace std;

long long maxFactorPrimo (long long num);

int main()
{
    system ("cls");
    long long num = 0, maxFactor = 0;
    cout <<"Escriba un número natural: ";
    cin >>num;

    maxFactor = maxFactorPrimo (num);
    cout <<endl<<"El máximo factor primo del numero "<<num<<" es: "<<maxFactor<<endl<<endl;

    return 0;
}

long long maxFactorPrimo (long long num)
{
    long long maxFactor = 0, resto = 0; 
    for (long long i = num; i >= 2; i--) 
    {
        if (num%i == 0) 
        { 
            int contar = 0;
            maxFactor = i;
            for (long long j = 2; j <= i; j++)
            {
                if (i%j == 0) contar++;
                if (contar > 1) break;
            }
            if (contar == 1) break;
        }
    }
    return maxFactor;
}