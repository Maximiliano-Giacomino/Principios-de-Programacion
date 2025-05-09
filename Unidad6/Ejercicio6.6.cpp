#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Escriba un programa C++ que calcule el área y el perímetro de un círculo cuyo
//radio se ingresa como dato.

int main() {
    float pi = 3.1416;
    cout << "Ingrese el dato del radio de su círculo: ";
    float radio;
    cin >> radio;

    double perimetro = 2*pi*radio;
    double area = pi*(radio * radio);

    cout << "El perimetro del círculo es: " << setprecision(2) << fixed << perimetro << endl;
    cout << "El area del círculo es: " << setprecision(2) << fixed << area << endl;
        
    return 0;
}