/*
Ejercicio 17 - Project Euler
Si los numeros del 1 al 5 se escriben en palabras ingles (one, two, three, fou, five), la cantidad total de letras seran 3 + 3 + 5 + 4 + 4 = 19.
Calcule la cantidad total de letras que tienen desde el 1 hasta el 1000.
NOTA: No incluir los espacios ni guiones, Ejemplo:
342 se escribe "three hundred and forty-two" y contiene 23 letras (sin contar espacios ni el guion).
115 se escribe "one hundred and fifteen" y contiene 20 letras.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");

    string unidades[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string numeros_10_19[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string numeros_20_90[] = {"","","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string numeros_100_900[] = {"","onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred"};
    string numero_1000[] = {"onethousand"};

    int u_unidad= 0, u_decena = 0, u_centena = 0;
    int suma_letras = 0;
    
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (j == 1) suma_letras += numeros_100_900[i].length() + numeros_10_19[k].length();
                else suma_letras += numeros_100_900[i].length() + numeros_20_90[j].length() + unidades[k].length();

                if (i >= 1 && (j >= 1 || k >= 1)) suma_letras += 3;
                
                cout<<"Número "<<i<<j<<k<<" : "<<suma_letras<<endl;
            }            
        }        
    }

    cout<<endl<<"La suma de todas las letras es: "<<suma_letras + 11<<endl;
    
    return 0;
}