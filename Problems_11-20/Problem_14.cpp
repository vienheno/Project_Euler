/*
Problema 14 de Project Euler (enunciado en español):

La secuencia de Collatz se forma de la siguiente manera:
Tomando cualquier número entero positivo n, el siguiente término se obtiene de la siguiente forma:
Si n es par, el siguiente término es n/2.
Si n es impar, el siguiente término es 3n + 1.
La secuencia termina cuando se llega a 1.

Ejemplo: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Se observa que la secuencia empieza con el numero inicial 13 y termina en 1, lo cual contiene 10 terminos.

Aunque todavía no se ha demostrado (la conjetura de Collatz), se cree que todas las secuencias llegan a 1.

¿Cuál es el número inicial menor a un millón que produce la secuencia más larga?
NOTA: La secuencia puede ser mayor a 1 millon
*/

#include <iostream>
using namespace std;

const int tamaño_array = 1000000;
long long arraySecuencia[tamaño_array] = {0};

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
//system("cls");

    int numMax = 0;
    const int limite = 1000000;
    long long MaxSecuencia = 0, numNext = 1;
    
    for (int i = 1; i < limite; i++)
    {
        if (i < 100) cout<<"Analizando con el numero inicial "<<i<<endl;
        int contar = 1;
        numNext = i;
        while (numNext != 1)
        {
            if (numNext < tamaño_array && arraySecuencia[numNext] != 0)
            {
                contar = contar + arraySecuencia[numNext] - 1;
                break;
            } 
            if (numNext % 2 == 0) numNext = numNext/2;
            else if (numNext % 2 != 0) numNext = 3*numNext + 1;
            contar ++;
        }
        arraySecuencia[i] = contar;
        
        if (contar >= MaxSecuencia) 
        {
            MaxSecuencia = contar;
            numMax = i;
        }
    }
    cout <<endl<<"--------------------------------------------"<<endl;
    cout <<"El número que tiene la mayor secuencia es: "<<numMax<<" con "<<MaxSecuencia<<" números";
    cout <<endl<<"--------------------------------------------"<<endl;

    return 0;
}
