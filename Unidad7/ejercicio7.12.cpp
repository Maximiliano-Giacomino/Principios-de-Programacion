#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ingrese un número natural N: ";
    int N;
    cin >> N;
    bool ES_PRIMO = true;

    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            ES_PRIMO = false;
        }
    }

    if (ES_PRIMO)
    {
        cout << "El numero introducido es primo." << endl;
    }
    else
    {
        cout << "El numero introducido no es primo." << endl;
    }

    int contador = 0;
    int iteracion_actual = 2;
    // cout << 2 << endl; // el número 2 es el 1er primo
    while (contador < 1000)
    {
        bool PRIMO = true;
        for (int i = 2; i < iteracion_actual; i++)
        {
            if (iteracion_actual % i == 0)
            {
                PRIMO = false;
            }
        }
        if (PRIMO)
        {
            cout << iteracion_actual << endl;
            contador++;
        }
        iteracion_actual++;
    }

    return 0;
}