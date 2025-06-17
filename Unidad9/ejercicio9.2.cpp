#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "matrix"
using namespace std;
// Generar aleatoriamente un arreglo lineal de 20 elementos numéricos, con enteros
// aleatorios entre 100 y 150 y mostrarlo en pantalla. Luego leer dos valores en las
// variables m y p. El valor m debe ser insertado en la posición p del arreglo. Mostrar
// el arreglo modificado

int aleat_acotado(int inf, int sup) {
    int N = (rand() % (sup - inf)) + inf;
    return N;
}

int main() {

    int largo = 20;
    int cota_inf = 100;
    int cota_sup = 150;

    vector<int> aleatorios(largo);
    for (int i = 0; i < largo; i++)
    {
        aleatorios[i] = aleat_acotado(cota_inf, cota_sup);
        cout << aleatorios[i] << endl;
    }

    cout << "Ingrese un par de valores (a, b, enteros). El 1er valor se meterá en la posición del 2do.";
    int a;
    int b;
    cin >> a >> b;
    
    if (b>aleatorios.size())
    {
        cout << "La posición ingresada no existe en el arreglo";
    }
    else
    {
        aleatorios.resize(aleatorios.size()+1);
        for (int i = aleatorios.size(); i >= b-1; i--) 
        {
            aleatorios[i] = aleatorios[i-1];
        }
        aleatorios[b-1] = a;

        for (int i = 0; i < aleatorios.size(); i++)
        {
        cout << aleatorios[i] << endl;
        }
                
    }    

    return 0;
}