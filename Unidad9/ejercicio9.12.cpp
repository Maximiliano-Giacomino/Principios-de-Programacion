#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;
// Considere el struct ficha_alumno del ejercicio anterior y realice lo siguiente:
// a. Agregue al tipo ficha_alumno un campo llamado materias el cual debe
// almacenar las calificaciones (de 1 a 10) de las asignaturas aprobadas por
// cada alumno en su carrera. Considere que la carrera consta de 32
// materias.
// b. Indique la sintaxis para asignar las calificaciones 8, 7 y 10 a las materias 6,
// 11 y 12 respectivamente a los miembros correspondientes de una variable
// de tipo ficha_alumno.


struct Ficha_alumno {
    string nombre;
    string apellido;
    string carrera;
    string facultad;
    int dni;
    int edad;
    float promedio_hist;
    int dia_nac;
    int mes_nac;
    int año_nac;

    vector<int> notas;
};

int main() {
    Ficha_alumno alumno1 = { "Pepe", "Grillo", "Ing. Química", "FIQ", 25766821, 33, 8.56, 19, 8, 1992 };
    Ficha_alumno alumno2 = { "Juan", "Perez", "Lic. Física", "FIQ", 35546871, 20, 6.35, 8, 7, 2005 };
    Ficha_alumno alumno3 = { "Micho", "Tito", "Analista en Sist.", "FICH", 38055739, 30, 7.25, 8, 8, 1994 };
    
    cout << alumno1.carrera << endl;
    cout << alumno2.carrera << endl;
    cout << alumno3.carrera << endl;
    cout << "///////////////////////////////" << endl; 
    

    //Add the values to the vector: 
    alumno1.notas.resize(35, 0); //We always need to give it a size at the start because it can't be done within the struct template
    alumno1.notas[6] = 8;
    alumno1.notas[11] = 7;
    alumno1.notas[12] = 10;

    //Show the vector
    for (size_t i = 0; i < alumno1.notas.size(); i++)
    {
        cout << alumno1.notas[i] << endl;
    }
        
    return 0;
}