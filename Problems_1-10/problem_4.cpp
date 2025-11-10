/*
Un número palindrómico se lee igual en ambos sentidos. 
El palíndromo más grande formado a partir del producto de dos números de 2 dígitos es 9009 = 91 × 99 . 
Encuentra el palíndromo más grande formado a partir del producto de dos números de 3 dígitos.
*/
 
#include <iostream>
using namespace std;

int numeroInvertido (int num1, int num2);

int main()
{
    system ("cls");
    int num1 = 999, num2 = 999, maxPal = 0, num = 0, numInv = 0;
       
    for (int i = 999; i > 99; i--)
    {
        for (int j = 999; j > 99; j--)
        {
            num = i * j;
            numInv = numeroInvertido (i, j);
            if (numInv == num) 
            {
                if (num > maxPal) 
                {
                    num1 = i;
                    num2 = j;
                    maxPal = num;
                }
            }
        }
            
    }
    
    cout <<"El palindromo más grande obtenido del producto de 2 números de 3 cifras es: "<<maxPal<<endl;
    cout <<"y se obtuvo multiplicando "<<num1<<" x "<<num2<<endl<<endl;
     
    return 0;
}

int numeroInvertido (int num1, int num2)
{
    int unidad = 0, decena = 0, centena = 0, milesima = 0, diezMilesima = 0, cienMilesima = 0;
    int num = 0, numInv = 0;

    num = num1*num2;

    if (num > 99999)
    {
        unidad = num%10;
        decena = (num%100)/10;
        centena = (num%1000)/100;
        milesima = (num%10000)/1000;
        diezMilesima = (num%100000)/10000;
        cienMilesima = (num/100000);

        numInv = unidad*100000 + decena*10000 + centena*1000 + milesima*100 + diezMilesima*10 + cienMilesima;
       
    }

    if (num <= 99999)
    {
        unidad = num%10;
        decena = (num%100)/10;
        centena = (num%1000)/100;
        milesima = (num%10000)/1000;
        diezMilesima = (num/10000);

        numInv = unidad*10000 + decena*1000 + centena*100 + milesima*10 + diezMilesima;
    }

    return numInv;

}