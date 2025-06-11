#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
// Declare un tipo struct con el nombre ficha_alumno indicando al menos 10 campos
// de tipo simple o string correspondientes a los datos de un alumno de la UNL.
// Luego declare 3 variables de ese tipo.

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
};

int main() {
    Ficha_alumno alumno1 = { "Pepe", "Grillo", "Ing. Química", "FIQ", 25766821, 33, 8.56, 19, 8, 1992 };
    Ficha_alumno alumno2 = { "Juan", "Perez", "Lic. Física", "FIQ", 35546871, 20, 6.35, 8, 7, 2005 };
    Ficha_alumno alumno3 = { "Micho", "Tito", "Analista en Sist.", "FICH", 38055739, 30, 7.25, 8, 8, 1994 };
    
    cout << alumno1.carrera << endl;
    cout << alumno2.carrera << endl;
    cout << alumno3.carrera << endl;
    
    return 0;
}