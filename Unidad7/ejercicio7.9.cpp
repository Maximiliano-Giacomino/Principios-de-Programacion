#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ingrese las constantes (a,b,c) de su ecuación cuadrática: ";
    int a, b, c;
    cin >> a >> b >> c;

    // Calcular el discriminante nos ayuda a saber si habrá raices complejas:
    int discr;
    discr = (b * b) - (4 * a * c);

    if (discr > 0)
    {
        float r1, r2;
        r1 = (-b + sqrt(discr)) / (2 * a);
        r2 = (-b - sqrt(discr)) / (2 * a);
        cout << "Las raices de la funcion son " << r1 << " y " << r2 << endl;
    }
    else if (discr < 0)
    {
        cout << "La funcion tiene raices complejas" << endl;
        cout << "La primer raiz compleja es " << -b / (2 * a) << " + i" << sqrt(-discr) / (2 * a) << endl;
        cout << "La segunda raiz compleja es " << -b / (2 * a) << " - i" << sqrt(-discr) / (2 * a) << endl;
    }
    else
    {
        float r;
        r = (-b + sqrt(discr)) / (2 * a);
        cout << "La función posee una sola raíz, y es " << r << endl;
    }

    return 0;
}