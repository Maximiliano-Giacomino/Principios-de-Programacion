#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ingrese un número natural N: ";
    int N;
    cin >> N;

    cout << "El programa calculará todos los números pares hasta llegar a N. Si desea la lista ordenada de menor a mayor, tipee 0. Si la desea ordenada de mayor a menor, tipee 1: ";
    bool menu;
    cin >> menu;

    if (menu == false)
    {
        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        for (int i = N - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}