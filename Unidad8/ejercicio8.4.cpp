#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Escriba una función que determine el mayor de 3 valores ENTEROS POSITIVOS.
//Modifique la función para que, utilizando parámetros por defecto, sirva también
//para determinar el mayor de 2 parámetros.

int mayor(int a, int b, int c = -1) {
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;   
    }
    else
    {
        return c;
    }    
}

int main() {

    cout << mayor(8,2) << endl;
    cout << mayor(10,26) << endl;
    cout << mayor(8,2,90) << endl;

    return 0;
}