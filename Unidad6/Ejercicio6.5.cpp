#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Escriba un programa en C++ que permita ingresar un valor numérico
// correspondiente a una medida en pies y devuelva la cantidad equivalente en
// metros. Nota: 1 pie = 0,3048 metros.

int main()
{
    float factor_conv = 0.3048;

    cout << "Ingrese un número en pies. Recibirá su conversión a metros: " << endl;
    double input;
    cin >> input;

    double result = input * factor_conv;
    cout << "El largo en unidades superiores es " << setprecision(2) << std::fixed << result << " metros." << endl;
    //En casos en que se quiere mantener la cantidad de numeros luego de la coma constante, se debe
    //usar "std::fixed" antes de pasar el resultado al cout. En nuestro caso, el resultado siempre 
    //tendrá dos números despues de la coma

    return 0;
}
