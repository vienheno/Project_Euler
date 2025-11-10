#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
    
    //Ejercicio 6
    float num1 = 2.5; 
    double num2 = 3.125468, resultado = 0;

    resultado = num1*num2;
    cout << "El resultado de la multiplicación es: " << resultado << endl<<endl;

    //Ejercicio 7
    bool valor = false;
    int valorCambiado = 0;
    if (valor == true) valorCambiado = 32;
    else valorCambiado = 16;
    cout << "El valor cambiado es: " << valorCambiado << endl;

    //Ejercicio 8
    char letra1 = 'A', letra2 = 'B';
    cout << "Letras concatenadas: " << letra1 << "" << letra2 << endl;

    //Ejercicio 9
    int numA = 5, numB = 5;
    int numMayor = 0;
    if (numA < numB) numMayor = numB;
    else if (numA > numB) numMayor = numA;

    if (numA == numB) cout << "Los números son iguales." << endl;
    else cout << "El número mayor es: " << numMayor << endl;

    //ejercicio 10
    int numeroOut = 13265654;
    cout << "El número es: " << numeroOut << endl;



    

    return 0;
}