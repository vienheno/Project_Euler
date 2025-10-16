/*
Problema 15 de Project Euler (enunciado en español):

Partiendo de la esquina superior izquierda de una cuadrícula de 20×20, ¿cuántos caminos diferentes hay hasta la esquina inferior derecha si solo se puede mover hacia abajo o hacia la derecha en cada paso?
*/

#include <iostream>
#include <cmath>
//#include <iomanip>
//#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
//system("cls");

    int numCuadros = 5;
    long long  numFinal = 1;

    for (int i = 1; i <= numCuadros; i++)
    {
        numFinal = numFinal*2*i*(2*i-1)/pow(i,2);
        cout<<"Cuadro "<<i<<"x"<<i<<": "<<numFinal<<endl;
    }
    //cout<<endl<<"Caminos diferentes hasta la esquina inferior derecho: "<<numFinal<<endl;

    return 0;
}
