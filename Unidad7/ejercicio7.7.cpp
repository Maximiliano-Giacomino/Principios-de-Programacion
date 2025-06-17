#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ingrese 3 numeros enteros:";
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y && x > z)
    {
        cout << "El número " << x << " es el mayor.";
    }
    else if (y > z)
    {
        cout << "El número " << y << " es el mayor.";
    }
    else if (z > y)
    {
        cout << "El número " << z << " es el mayor.";
    }
    else
    {
        cout << "No se pudo determinar un mayor entre los numeros ingresados.";
    }

    return 0;
}