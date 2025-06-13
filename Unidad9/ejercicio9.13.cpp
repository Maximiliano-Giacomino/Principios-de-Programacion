#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;

// Declare una variable x con la cual pueda representar en un programa C++ a una
// lista de hasta 200 alumnos, cuyos datos se organizan en la estructura tipo
// ficha_alumno que creó antes.

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
    int cant_alumnos = 200;
    vector<Ficha_alumno> x(cant_alumnos);

    return 0;
}