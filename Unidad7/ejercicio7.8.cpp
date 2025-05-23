#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ingrese la fecha de nacimiento:";
    int fecha_nac;
    cin >> fecha_nac;

    cout << "Ingrese la fecha de la votacion:";
    int fecha_vot;
    cin >> fecha_vot;

    int dia_nac, mes_nac, año_nac;
    dia_nac = fecha_nac / 1000000;
    año_nac = fecha_nac % 10000;
    mes_nac = (fecha_nac % 1000000) / 10000;

    int dia_vot, mes_vot, año_vot;
    dia_vot = fecha_vot / 1000000;
    año_vot = fecha_vot % 10000;
    mes_vot = (fecha_vot % 1000000) / 10000;

    if ((año_vot - año_nac) > 18)
    {
        cout << "El estudiante puede votar.";
    }
    else if (((año_vot - año_nac) == 18) && (mes_nac < mes_vot || (mes_nac == mes_vot && dia_nac < dia_vot)))
    {
        cout << "El estudiante puede votar.";
    }
    else
    {
        cout << "El estudiante no puede votar.";
    }

    return 0;
}