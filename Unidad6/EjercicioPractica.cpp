#include <iostream>
#include <cmath>
using namespace std;

//Se desea construir un programa donde el usuario ingrese el largo de los lados de un triángulo
//rectángulo. En base a estos datos se debe calcular el largo de la hipotenusa, el área y el 
//perímetro del triángulo

int main()
{
    cout << "Inserte los largos de los lados de su triángulo: " << endl;
    
    int lado_a, lado_b;
    cin >> lado_a;
    cin >> lado_b;
    //Bloque de ingreso de datos

    float hipot = sqrt((lado_a*lado_a)+(lado_b*lado_b));
    float perim = lado_a + lado_b + hipot;
    float area = (lado_a * lado_b)/2;

    cout << "Los resultados fueron: " << endl;
    cout << "Hipotenusa: " << hipot;
    cout << " Perimetro: " << perim;
    cout << " Area: " << area << endl;

    return 0;
}