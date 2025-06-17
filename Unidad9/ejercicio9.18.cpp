#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;


// Un hospital lleva un registro de los pacientes internados: nombre, DNI, diagnóstico,
// número de habitación. a) Defina un struct paciente con los datos mencionados. b)
// Lea en un arreglo de pacientes los datos de N pacientes. Informe: c) En qué
// habitación se encuentra internado el paciente "Cosme Fulanito" d) Cuántos
// pacientes están internados con diagnóstico de "Apendicitis". e) Los datos del
// paciente internado en la habitación 101.

struct Paciente {
    string nombre;
    int dni;
    string diag;
    int habitacion;
};

int main() {
    int N;
    cout << "Ingrese el número de pacientes (entero): ";
    cin >> N;

    cout << "Ingrese los datos del 1er paciente: ";
    for (int i = 0; i < N; i++)
    {
        string aux_n, aux_a, aux_diag;
        int aux_dni, aux_h;
        cout << "Nombre: ";
        cin >> aux_n;
        cout << "Apellido: ";
        cin >> aux_a;
        cout << "Diagnóstico: ";
        cin >> aux_diag;



        cout << "DNI";
        cin >> aux_dni;

    }
    

    return 0;
}