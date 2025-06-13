#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;

// a) Defina un struct para guardar notas de parciales de un alumno: apellido y
// nombre, notas de dos parciales y sus respectivos recuperatorios (las instancias
// que no rindió tendrán -1).
// b) Defina otro struct para guardar el resultado final del cursado de un alumno:
// apellido y nombre, condición final ("libre", "promocionado" o "regular") y nota final
// (de 1 a 10, solo si promociona, será -1 en caso contrario).
// c) Escriba una función que reciba una instancia del primer struct y retorne una del
// segundo. La función debe calcular la condición y la nota final (redondeando el
// promedio) según las reglas de esta materia.
// d) Escriba un programa cliente para probar la función.
struct Notas_alumno
{
    string nombre, apellido;
    int parcial1 = -1, parcial2 = -1, recuperatorio1 = -1, recuperatorio2 = -1;
};

struct Condicion_alumno
{
    string nombre, apellido;
    string condicion_final;
    int nota_final = -1;
};

int mayor(int a,int b) {
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }    
};

Condicion_alumno es_aprobado(Notas_alumno alumno) {
    int nota1 = mayor(alumno.parcial1, alumno.recuperatorio1);
    int nota2 = mayor(alumno.parcial2, alumno.recuperatorio2);
    int prom = (nota1 + (nota2 * 2))/3;

    if (nota1 >= 6 && nota2 >= 6 && prom >= 7)
    {
        return {alumno.nombre, alumno.apellido, "Promocionado", prom};
    }
    else if (nota1 >= 4 && nota2 >= 4)
    {
        return {alumno.nombre, alumno.apellido, "Regular"};
    }
    else {
        return {alumno.nombre, alumno.apellido, "Libre"};
    }
};

void Lector_condicion_alumno(Condicion_alumno alumno) {
    cout << "Alumno: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << alumno.condicion_final;
}


int main() {
    Notas_alumno c = {"Juan", "Perez", 3, 6, 9 };
    Condicion_alumno alumno1 = es_aprobado(c);
    Lector_condicion_alumno(alumno1);

    return 0;
}

//Jorge Provolier -> BLender?