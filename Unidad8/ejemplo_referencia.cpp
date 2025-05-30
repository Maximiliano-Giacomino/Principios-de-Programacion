#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void suma(int a, int b, int &res) {
    res = a + b;
}

int main() {
    int resultado;

    cout << "Ingrese dos números a sumar: ";
    int a;
    int b;

    cin >> a >> b;
    suma(a,b,resultado);

    cout << resultado << endl;

    return 0;
}