/*
Problema 15 de Project Euler (enunciado en español):

Partiendo de la esquina superior izquierda de una cuadrícula de 20×20, ¿cuántos caminos diferentes hay hasta la esquina inferior derecha si solo se puede mover hacia abajo o hacia la derecha en cada paso?
*/

#include <iostream>
//#include <iomanip>
//#include <locale>
//#include <string>
using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");

    const int n = 20; //Indica el orden de la cuadricula nxn
    long long matrixBox[n+1][n+1] ={0}; //Indica el orden de la matri

    for (int i = 0; i <= n; i++) matrixBox[i][0] = 1;
    for (int i = 0; i <= n; i++) matrixBox[0][i] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            matrixBox[i][j] = matrixBox[i][j-1] + matrixBox[i-1][j];
            if (i == j)
            {
                cout<<endl<<"Total de caminos de cuadrícula "<<i<<"x"<<j<<" es: "<<matrixBox[i][j];
            }            
        }        
    }
    
    return 0;
}