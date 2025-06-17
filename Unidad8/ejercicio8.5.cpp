#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Desarrolle una función llamada Intercambia(...) que reciba dos variables enteras
// por referencia e intercambie sus valores. Escriba dos sobrecargas de la función
// que permitan realizar el mismo procedimiento con dos datos de tipo real, y dos de
// tipo caracter. Pruebe las funciones desde un programa cliente.

void Intercambia(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Intercambia(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void Intercambia(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << "Ingrese dos numeros enteros, cuyo orden sera intercambiado: " << endl;
    int numero1;
    int numero2;
    cin >> numero1 >> numero2;

    cout << "Orden original: " << numero1 << " --- " << numero2 << endl;
    Intercambia(numero1,numero2);
    cout << "Nuevo orden: " << numero1 << " --- " << numero2 << endl;

    ///////////////////////////////////////////////////////////////////////////////

    cout << "Ingrese dos numeros reales, cuyo orden sera intercambiado: " << endl;
    float real1;
    float real2;
    cin >> real1 >> real2;

    cout << "Orden original: " << real1 << " --- " << real2 << endl;
    Intercambia(real1,real2);
    cout << "Nuevo orden: " << real1 << " --- " << real2 << endl;

    ///////////////////////////////////////////////////////////////////////////////

    cout << "Ingrese dos caracteres, cuyo orden sera intercambiado: " << endl;
    char char1;
    char char2;
    cin >> char1 >> char2;

    cout << "Orden original: " << char1 << " --- " << char2 << endl;
    Intercambia(char1,char2);
    cout << "Nuevo orden: " << char1 << " --- " << char2 << endl;
    return 0;
}