#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;
// Un número complejo tiene la forma a+bi donde a y b son números reales. Escriba
// un programa C++ que permita ingresar las componentes de 2 números complejos y
// a través de un menú el usuario seleccione la operación a realizar (suma, resta o
// multiplicación). Proponga una struct llamado Complejo para representar cada
// número, y utilice una función diferente para cada operación de complejos, que
// retorne el complejo resultante.
struct Complejo {
    float a;
    float b;
};

void lector_complejos(Complejo c) {
    cout << c.a << " + " << c.b << "i" << endl; 
};


int main() {
    cout << "Ingrese los términos de su 1er número complejo: ";
    float a, b;
    cin >> a;
    cin >> b;
    Complejo c1 = {a,b};
    lector_complejos(c1);
    
    cout << "Ingrese los términos de su 2do número complejo: ";
    float c, d;
    cin >> c;
    cin >> d;

    Complejo c2 = {c,d};
    lector_complejos(c2);

    cout << "Seleccione la operación a realizar: " << endl;
    cout << "1 --> Suma" << endl;
    cout << "2 --> Resta" << endl;
    cout << "3 --> Multiplicación" << endl;
    int selector;
    cin >> selector;
    while (selector!=1 && selector !=2 && selector != 3)
    {
        cout << "Ingrese un selector correcto (entre 1 y 3): ";
        cin >> selector;
    }
    

    if (selector == 1)
    {
        Complejo resultado = {(c1.a + c2.a), (c1.b + c2.b)};
        cout << "El resultado de la operación es: ";
        lector_complejos(resultado); 
    }
    else if (selector == 2)
    {
        Complejo resultado = {(c1.a - c2.a), (c1.b - c2.b)};
        cout << "El resultado de la operación es: ";
        lector_complejos(resultado); 
    }
    else if (selector == 3)
    {
        Complejo resultado = {(c1.a * c2.a), (c1.b * c2.b)};
        cout << "El resultado de la operación es: ";
        lector_complejos(resultado); 
    }   
    
    return 0;
}