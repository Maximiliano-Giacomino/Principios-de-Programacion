#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Escriba un programa C++ que permita ingresar los nombres y fechas de
// nacimiento de dos personas. Las fechas de nacimiento deben ingresarse como un
// único entero con el formato aaaammdd, es decir que los cuatro primeros dígitos
// corresponden al año, los dos siguientes al mes, y finalmente los últimos dos al día.
// El programa mostrar nombre y fechas de nacimiento de las 2 personas ingresadas
// con un formato similar al siguiente:
//Luis......: 20/06/1991
//Soledad...: 15/10/1993

int main()
{
    cout << "Ingrese las fechas de nacimiento de las dos personas (formato aaaammdd):" << endl;

    cout << "Primer Nombre (SIN ESPACIOS)" << endl;
    string first_name;
    cin >> first_name;
    cout << "Primer Fecha" << endl;
    int first_person;
    cin >> first_person;

    cout << "Segundo Nombre:" << endl;
    string second_name;
    cin >> second_name;
    cout << "Segunda Fecha:" << endl;
    int second_person;
    cin >> second_person;

    int day_first = first_person % 100;
    int month_first = (first_person % 10000) / 100;
    int year_first = first_person / 10000;

    int day_second = second_person % 100;
    int month_second = (second_person % 10000) / 100;
    int year_second = second_person / 10000;

    cout << first_name << ": " << day_first << "/" << month_first << "/" << year_first << endl;
    cout << second_name << ": " << day_second << "/" << month_second << "/" << year_second <<endl;

    return 0;
}
//El ejercicio está "terminado" pero falta ver y repasar el formateo para que el output se vea como
//pide el pdf original.