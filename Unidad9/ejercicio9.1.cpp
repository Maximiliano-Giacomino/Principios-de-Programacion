#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "matrix"
using namespace std;
//Leer las calificaciones de un grupo de alumnos alumnos que asistieron a una evaluación de programación. 
//Mostrar las notas de los alumnos que se encuentren por encima del promedio. TODO: arreglar promedios


int main() {
    int alumnos = 5;
    vector<float> vect(alumnos);
    int nota;
    int acum = 0;
    cout << "Ingrese las notas de los alumnos: ";
    
    for (int i = 0; i < alumnos; i++) {
        cin >> nota;
        vect.push_back(nota);
        acum += nota;
        cout << "Proximo alumno: ";
    }
    
    float prom = acum/alumnos;
    
    for (int i = 0; i < alumnos; i++)
    {
        if (vect[i] > prom)
        {
            cout << "El alumno " << i << " supera el promedio.";
        }    
    }

    return 0;
}




