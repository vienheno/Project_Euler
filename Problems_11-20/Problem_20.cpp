//Encontrar la suma de los digitos del resultado de 100! (Factorial de 100)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string productoFinal (string producto, int nex_num) {
    int cifra_int = 0, cifra_next = 0, lleva = 0, primer_digito = 0;
    int nex_num_unidad = 0, nex_num_decena = 0, digitos_nex_num = 0;
    int multiplicador = 0;
    string cifra_srt, fila_unidad, fila_decena, fila;

    fila = producto;
    fila_unidad = producto;
    fila_decena = producto;
    //digitos_nex_num = (nex_num > 9) ? 2 : 1;
    if (nex_num > 9) digitos_nex_num = 2;
    else {
        digitos_nex_num = 1;
        fila_decena = "0";
    }
    cout<<"Numero de digitos del multiplicando: "<<digitos_nex_num<<endl;

    for (int d = 1; d <= digitos_nex_num ; d++)
    { 
        if (d == 1) multiplicador = nex_num % 10;
        if (d == 2) multiplicador = nex_num / 10;
        cout<<"Digito multiplicador: "<<multiplicador<<endl;

        for (int i = fila.length() - 1; i >= 0; i--)
        {
            cifra_srt = fila[i];
            cifra_int = stoi(cifra_srt);
            cifra_next = cifra_int*multiplicador + lleva;

            if (cifra_next < 10) {
                fila.replace(i, 1, to_string(cifra_next));
                lleva = 0;
            } else {
                fila.replace(i, 1, to_string(cifra_next % 10));
                lleva = cifra_next / 10;
            }
        }
        
        if (cifra_next > 9) {
            primer_digito = cifra_next / 10;
            fila = to_string(primer_digito) + fila;
        }
        if (d == 1) fila_unidad = fila;
        if (d == 2) fila_decena = fila + "0";
        fila = producto;
        lleva = 0;
    }

    cout<<"Fila 1: "<<fila_unidad<<endl;
    cout<<"Fila 2: "<<fila_decena<<endl;


            
}

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");

    productoFinal("3745", 27);

    return 0;
}