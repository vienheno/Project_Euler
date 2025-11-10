#include <iostream>
#include <string>

using namespace std;

int main() {
//setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
//Numero primos menores a 20
    int primos20[] = {2, 3, 5, 7, 11, 13, 17, 19};
    cout << "Números primos menores a 20: ";
    for (int i = 0; i < 8; i++) cout << primos20[i] << " ";
    cout << endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}