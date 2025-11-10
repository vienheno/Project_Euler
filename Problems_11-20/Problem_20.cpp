//Encontrar la suma de los digitos del resultado de 100! (Factorial de 100)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string productoFinal (string producto, int nex_num) {
    int cifra_int = 0, cifra_next = 0, lleva = 0, primer_digito = 0;
    int nex_num_unidad = 0, nex_num_decena = 0, digitos_nex_num = 0;
    int multiplicador = 0, longitud_fila = 0, digito_producto;
    string cifra_srt, fila_unidad, fila_decena, fila;
    string fila_unidad_srt, fila_decena_srt;

    fila = producto;
    fila_unidad = producto;
    fila_decena = producto;
    //digitos_nex_num = (nex_num > 9) ? 2 : 1;
    if (nex_num > 9) digitos_nex_num = 2;
    else {
        digitos_nex_num = 1;
        fila_decena = "0";
    }
    //cout<<"Numero de digitos del multiplicando: "<<digitos_nex_num<<endl;

    for (int d = 1; d <= digitos_nex_num ; d++)
    { 
        if (d == 1) multiplicador = nex_num % 10;
        if (d == 2) multiplicador = nex_num / 10;
        //cout<<"Digito multiplicador: "<<multiplicador<<endl;

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

    if (fila_decena.length() - fila_unidad.length() == 1) fila_unidad = "0" + fila_unidad;
    if (fila_decena.length() - fila_unidad.length() == 2) fila_unidad = "00" + fila_unidad;

    //cout<<"Fila 1: "<<fila_unidad<<endl;
    //cout<<"Fila 2: "<<fila_decena<<endl;

    if (nex_num < 10) producto = fila_unidad;
    else {
        lleva = 0;
        if (fila_decena.length() - producto.length() == 1) producto = "0" + producto;
        if (fila_decena.length() - producto.length() == 2) producto = "00" + producto;
        
        for (int i = fila_decena.length() -1  ; i >= 0; i--)
        {
            fila_unidad_srt = fila_unidad[i];
            fila_decena_srt = fila_decena[i];
            digito_producto = stoi(fila_unidad_srt) + stoi(fila_decena_srt) + lleva;
            if (digito_producto < 10) {
                producto.replace(i, 1, to_string(digito_producto));
                lleva = 0;
            } else {
                producto.replace(i, 1, to_string(digito_producto % 10));
                lleva = digito_producto / 10;
            }
            //cout<<"Producto: "<<producto<<endl;     
        }

        if (digito_producto > 9) {
            primer_digito = digito_producto / 10;
            producto = to_string(primer_digito) + producto;
        }

    }
    return producto;          
}

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");
    string multiplicando = "1";
    int n_factorial = 100, suma = 0;

    for (int i = 1; i <= n_factorial; i++) multiplicando = productoFinal(multiplicando, i);
    for (int i = 0; i <= multiplicando.length() - 1; i++) suma = suma + int(multiplicando[i] - '0');
    
    //cout<<"Factorial de "<<n_factorial<<" es: "<<multiplicando<<endl;
    cout<<"La suma de digitos del numero factorial es: "<<suma<<endl;

    return 0;
}