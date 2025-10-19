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
    string numeros_10_19[] = {"ten", "eleven", "twelve", "thirdteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string numeros_20_90[] = {"","","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string numeros_100_900[] = {"onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred"};
    string numero_1000[] = {"onethousand"};
    
    int numero = 0, suma_letras = 0, suma_unidades = 0, suma_10_19 = 0, suma_20_99 = 0, u_digito = 0, n_temporal = 0;
    int suma_100_109 = 0, suma_110_119 = 0, suma_120_999 = 0, j_decena = 0, u_decena = 0;

    cout<<"Ingrese un número entero: ";
    cin>>numero;

    if (numero < 10) {
        for (int i = 1; i <= numero; i++) suma_unidades += unidades[i].length();
        suma_letras += suma_unidades;
    }
    if (numero >= 10 && numero <= 19) {
        for (int i = 1; i <= 9; i++) suma_unidades += unidades[i].length();
        for (int i = 0; i <= numero%10; i++) suma_10_19 += numeros_10_19[i].length(); 
        suma_letras = suma_unidades + suma_10_19; 
    }
    //cout<<suma_letras<<endl;
    if (numero >= 20 && numero <= 99 ) {
        for (int i = 1; i <= 9; i++) suma_unidades += unidades[i].length();
        for (int i = 0; i <= 9; i++) suma_10_19 += numeros_10_19[i].length();
        for (int i = 2; i <= numero/10; i++) {
            if (i == numero/10) u_digito = numero % 10;
            else u_digito = 9;

            for (int j = 0; j <= u_digito; j++) {
                suma_20_99 += numeros_20_90[i].length() + unidades[j].length();
            }            
        }
        suma_letras = suma_unidades + suma_10_19 + suma_20_99;      
    }  

    if (numero >= 100 && numero <= 999)
    {
        for (int i = 1; i <= 9; i++) suma_unidades += unidades[i].length();
        for (int i = 0; i <= 9; i++) suma_10_19 += numeros_10_19[i].length();
        for (int i = 2; i <= 9; i++) for (int j = 0; j <= 9; j++) suma_20_99 += numeros_20_90[i].length() + unidades[j].length();        
        //cout<<"Suma de los primeros 99 numeros: "<<suma_unidades + suma_10_19 + suma_20_99<<endl;
        
        for (int i = 0; i <= numero/100 - 1; i++)
        {
            if (numero <= 109){
                for (int j = 0; j <= numero%10; j++) suma_100_109 += numeros_100_900[i].length() + unidades[j].length();             
                suma_letras = suma_unidades + suma_10_19 + suma_20_99 + suma_100_109;

            } else if (numero >= 110 && numero <= 119) {
                for (int j = 0; j <= 9; j++) suma_100_109 += numeros_100_900[i].length() + unidades[j].length();
                for (int j = 0; j <= numero%10; j++) suma_110_119 += numeros_100_900[i].length() + numeros_10_19[j].length();
                suma_letras = suma_unidades + suma_10_19 + suma_20_99 + suma_100_109 + suma_110_119;

            }else if (numero >= 120 && numero <= 999){
                for (int j = 0; j <= 9; j++) suma_100_109 += numeros_100_900[i].length() + unidades[j].length();
                for (int j = 0; j <= 9; j++) suma_110_119 += numeros_100_900[i].length() + numeros_10_19[j].length();
                //cout<<"Suma de los primeros 119 numeros: "<<suma_unidades + suma_10_19 + suma_20_99 + suma_100_109 + suma_110_119<<endl;

                if (numero >= 130) j_decena = 0;
                else j_decena = 2;

                if (i == numero/100 - 1) u_decena = (numero/10)%10;
                else u_decena = 9;
                
                
                for (int j = 2; j <= u_decena; j++)
                {
                    if (i == numero/100 - 1 && j == (numero/10)%10) u_digito = numero % 10;
                    else u_digito = 9;

                    for (int k = 0; k <= u_digito ; k++)
                    {
                        suma_120_999 += numeros_100_900[i].length() + numeros_20_90[j].length() + unidades[k].length(); 
                        cout<<"suma hasta el numero "<<i+1<<j<<k<<" : "<<suma_unidades + suma_10_19 + suma_20_99 + suma_100_109 + suma_110_119 + suma_120_999<<endl;
                    }                    
                }
                suma_letras = suma_unidades + suma_10_19 + suma_20_99 + suma_100_109 + suma_110_119 + suma_120_999;
                
            }
            
            
            
            
            
        }
        
    }
    
    cout<<"La cantidad total de letras es: "<<suma_letras<<endl;

    return 0;
}