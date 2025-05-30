#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Escriba un programa que permita calcular las raíces de una ecuación cuadrática de la forma 
//ax2+bx+c = 0 conociendo los valores de sus coeficientes.

//TODO: añadir comportamiento especial cuando haya raices múltiples

bool tiene_raices_complejas(float a, float b, float c) {
    if (((b*b)-(4*a*c)) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

void raices_reales(float a, float b, float c) {
    float raiz1 = (-b + sqrt((b*b)-(4*a*c))) / (2*a);
    float raiz2 = (-b - sqrt((b*b)-(4*a*c))) / (2*a);
    cout << "X = " << raiz1 << " es la 1er raiz de la parabóla" << endl;
    cout << "X = " << raiz2 << " es la 2da raiz de la parabóla" << endl;        
}

void raices_complejas(float a, float b, float c) {
    float determ = ((b*b)-(4*a*c));
    float conj_pair1 = -b / (2*a);
    float conj_pair2 = sqrt(-determ) / (2*a);

    cout << conj_pair1 << " + " << conj_pair2 << "i" << " es la 1er raiz compleja de la parabóla" << endl;
    cout << conj_pair1 << " - " << conj_pair2 << "i" << " es la 2da raiz compleja de la parabóla" << endl;
}

int main() {
    cout << "Ingrese las 3 constantes de su ecuanción cuadrática: ";
    float a;
    float b;
    float c;

    cin >> a >> b >> c;
    
    if (tiene_raices_complejas(a,b,c))  
    {
        raices_complejas(a,b,c);
    }
    else
    {
        raices_reales(a,b,c);
    }

    return 0;
}