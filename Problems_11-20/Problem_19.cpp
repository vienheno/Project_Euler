//¿Cuántos domingos cayeron en el primer día del mes durante el siglo XX (1 de enero de 1901 a 31 de diciembre de 2000)?
//1 de enero de 1900 fue lunes
//Septiembre, abril, junio y noviembre tienen 30 días
//Todos los demás meses tienen 31 días, excepto febrero, que tiene 28 días
//En años bisiestos, febrero tiene 29 días
//Un año es bisiesto si es multiplo de 4 pero no multiplo de 100, o que sea multiplo de 400.

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

// Comprueba si un año es bisiesto: divisible entre 4 y no entre 100, a menos que sea divisible entre 400.
bool anioBisiesto (int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) return true;
    else return false;
}

int diasDelMes (int mes, int anio) {
    int cant_dias = 0;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) cant_dias = 30;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) cant_dias = 31;
    if (mes == 2 && anioBisiesto(anio) == false) cant_dias = 28;
    if (mes == 2 && anioBisiesto(anio) == true) cant_dias = 29;

    return cant_dias;
}

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");

int dia = 1, contarDomingos = 0 ; //lunes = 1, martes = 2, ...., sabado = 6, domingo = 7

//Sabiendo que el 1 de enero de 1900 cae lunes (dia = 1), calculamos que dia cae el 1 de enero de 1901
dia = (dia + 4*30 + 7*31 + 28) % 7; //dia = 2 --> Martes
//cout<<"dia "<<dia<<endl;

for (int a = 1901; a <= 2000; a++) // "a" hace referencia al año --> recorrido del año
{
    for (int m = 1; m <= 12; m++) //"m" hace referencia al mes del año --> recorrido del mes
    {
        dia += diasDelMes(m, a);
        if (dia % 7 == 0) {
            dia = 7;
            contarDomingos += 1;
        }
    }    
}

cout<<"Durante el siglo XX hay "<<contarDomingos<<" domingos"<<endl;

    return 0;
}