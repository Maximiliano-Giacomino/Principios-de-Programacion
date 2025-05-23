#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Una Empresa paga a sus 25 operarios semanalmente de acuerdo con la cantidad de horas trabajadas, a razón de X pesos la hora hasta 40 hs. y un 50% más por todas las horas que pasan de 40. Escriba un programa que permita ingresar el costo inicial por hora (X), y luego la cantidad de horas trabajadas por cada empleado e informe el salario que le corresponde cobrar. Finalmente, debe informar a modo de resumen: a) los salarios máximo, mínimo y promedio, y b) el monto total que la empresa pagó en concepto de salarios

int main()
{
    cout << "Ingrese el costo inicial por hora: ";
    int costo_inicial;
    cin >> costo_inicial;

    float total = 0;
    for (int i = 1; i < 26; i++)
    {
        cout << "Ingrese las horas que trabajó el operario " << i;
        int horas_trabajadas;
        cin >> horas_trabajadas;
        if (horas_trabajadas <= 40)
        {
            int salario = horas_trabajadas * costo_inicial;
            cout << "Al operario " << i << " se le debe pagar " << salario << "pesos";
        }
    }
}