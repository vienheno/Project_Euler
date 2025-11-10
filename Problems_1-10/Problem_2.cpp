/*
Cada término nuevo en la secuencia de Fibonacci se genera sumando los dos términos anteriores. Si se comienza con 1 y 2 , 
los primeros 10 términos serán: 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , … 
Considerando los términos en la secuencia de Fibonacci cuyos valores no superan los cuatro millones, encuentre la suma de los términos pares.
*/

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int SumaParesFibonacci(int num1, int num2, int numMax);

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    int num1 = 1, num2 = 2, numMax = 0, suma = 0;
    cout <<"¿Cual es el valor de fibonacci máximo?: ";
    cin >>numMax;
    //cout <<endl<<num1<<'\t';
    suma = SumaParesFibonacci(num1, num2, numMax);

    cout <<endl<<"La suma los números pares fibonacci menores a "<<numMax<<" es "<<suma<<endl<<endl;

    return 0;
}

int SumaParesFibonacci(int num1, int num2, int numMax)
{
    int temp = 0, suma = 0;
    while (num2 <= numMax)
    {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        //cout <<num1<<'\t';
        if (num1%2 == 0) suma = suma + num1;
    }
    return suma;       
}