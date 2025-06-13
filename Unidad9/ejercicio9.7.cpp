#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;

// En una olimpíada estudiantil compiten N alumnos en 3 pruebas (1: matemáticas, 2:
// física y 3: computación). Se ingresan por cada inscripto el DNI y su número
// asignado para la competencia (entre 1 y N). Luego, sin orden alguno, se van
// ingresando ternas con los puntajes de cada prueba: número de participante, código
// de prueba, y puntaje en la actividad. Escriba un algoritmo que determine: a) El DNI
// del ganador de la competencia y el puntaje total obtenido. b) El DNI del estudiante
// que ocupó el 2do lugar y su puntaje. c) ¿Qué puntaje obtuvo en Computación el
// ganador de la competencia?

int main() {
    cout << "Ingrese el numero de alumnos: ";
    int n; 
    cin >> n;
    matrix<int> m(n, 4, 0);

    //Lectura participantes
    for (int i = 0; i < n; i++)
    {
        int dni, nro;
        cin >> dni >> nro;
        m[nro - 1][0] = dni;
    }

    //Lectura de puntajes en c/prueba
    int nro_part;
    cin >> nro_part;
    while (nro_part!=0)
    {
        int nro_prueba, pts;
        cin >> nro_prueba >> pts;
        m[nro_part-1][nro_prueba] = pts;
        cin >> nro_part;
    }
    
    //Busqueda del mayor TODO

    
    return 0;
}