#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

// a) En cierta materia, un alumno es regular si tiene al menos 50% en cada parcial (o
// en su recuperatorio, queda siempre la mejor nota) y 60% de asistencia. Y es
// promocionado si tiene al menos 80% en cada parcial y 80% de asistencia. Escriba
// una función que reciba los datos de un alumno y retorne su condición.
// b) Desarrolle un programa cliente que permita ingresar los nombres, el porcentaje
// de asistencia, y las 4 calificaciones (parcial 1, parcial 2, recuperatorio 1, y
// recuperatorio 2) de cada uno de los N alumnos del curso. El programa debe,
// haciendo uso de la función, contar y mostrar cuántos alumnos quedan en condición
// de regular y cuántos de promoción.

//Regresa el mayor de dos numeros
int mayor_entre(int a, int b) {
    if (a>b) {
        return a;
    }
    else
    {
        return b;
    }    
}

//devolverá libre, regular o promocionado
string estado_alumno(int parcial1, int parcial2, int recuperatorio1, int recuperatorio2, float asist) {
    int mayor_1 = mayor_entre(parcial1, recuperatorio1);
    int mayor_2 = mayor_entre(parcial2, recuperatorio2);

    if (asist < .6)
    {
        return "libre";
    }    
    else if (mayor_1 < 50 || mayor_2 < 50 || asist < .6)
    {
        return "libre";
    }
    else if (mayor_1 < 80 && mayor_2 < 80 && asist > .6)
    {
        return "regular";
    }
    else if (mayor_1 >= 80 && mayor_2 >= 80 && asist > .6)
    {
        return "promocionado";
    }
    else
    {
        return "CHEQUEAR";
    }   
}

int main() {
    int regulares = 0;
    int promocionados = 0;
    cout << "Ingrese los datos de los alumnos. Cuando termine ingrese una fila de ceros: " << endl;
    cout << "(parcial1, parcial2, recup1, recup2, asistencia (use numeros fraccionarios: si es 60% ingrese 0.6))" << endl;

    int parcial1;
    int parcial2;
    int recuperatorio1;
    int recuperatorio2;
    float asist;

    cin >> parcial1 >> parcial2 >> recuperatorio1 >> recuperatorio2 >> asist;
    while ((parcial1 || parcial2 || recuperatorio1 || recuperatorio2 || asist) != 0)
    {
        string temp = estado_alumno(parcial1,parcial2,recuperatorio1,recuperatorio2,asist);
        if (temp == "regular")
        {
            regulares += 1;
        }
        else if (temp == "promocionado")
        {
            promocionados += 1;
        }
        cout << "Proximo alumno: " << endl;
        cin >> parcial1 >> parcial2 >> recuperatorio1 >> recuperatorio2 >> asist;
    }
    
    return 0;
}