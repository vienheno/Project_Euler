/*
Si enumeramos todos los números naturales por debajo de 10 que son múltiplos de 3 o 5 , obtenemos 3 , 5 , 6 y 9 . 
La suma de estos múltiplos es 23 . Halla la suma de todos los múltiplos de 3 o 5 por debajo de 1000 .
*/

#include <iostream>
using namespace std;

int main ()
{
    system("cls");
    int num = 0, suma = 0, k = 0;

    cout <<"-----------------------------------------------------------------------"<<endl;
    //Ingresamos un número natural a evaluar
    cout <<"Digite un número natural: ";
    cin >>num;
    
    //Realizamos las operaciones
    for ( k = 1; k < num; k++)
    {
        if(k%3 == 0 || k%5 == 0)
        {
            suma = suma + k;

        }
    }

    //Mensaje de salida mostrando el resultado
    cout <<"La suma de los números múltiplos de 3 o de 5 menores de "<<num<<" es "<<suma<<endl;
    cout <<"-----------------------------------------------------------------------"<<endl;

    
    return 0;
}
