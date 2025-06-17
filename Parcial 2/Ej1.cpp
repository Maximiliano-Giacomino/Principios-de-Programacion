#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;

// Ej 1 (30pts) a) Diseñe una función C++ que se la invoque de la siguiente forma: e = edad(f_nac,f_hoy);
// siendo f_nac y f_hoy de tipo Fecha: un struct con 3 miembros enteros: dia, mes, anio. La función debe
// devolver la edad de una persona que nació en la fecha f_nac, siendo f_hoy la fecha de hoy. b) Considere
// un club deportivo barrial que tiene N socios, y cada socio paga una cuota de acuerdo a su categoría:
// infantiles (hasta 12 años inclusive), juveniles (hasta 18 años inclusive) y mayores (más de 18 años).
// Escriba un programa C++ que organice en un único vector los datos de cada asociado: apellido, nombres,
// dni, categoría, fecha de nacimiento (de tipo Fecha). Debe leer primero los 3 valores de la cuota (de cada
// categoría), y a continuación los datos de los N socios. c) El programa debe actualizar el vector de socios
// considerando la fecha de hoy a través de una función actualizar(..), pues varios socios pueden haber
// cambiado de categoría al cambiar su edad; y luego d) calcular la recaudación mensual del club si todos
// los socios pagaran su cuota al día de hoy.

struct Fecha {
    int dia, mes, año;
};

struct Socio {
    string apellido, nombre;
    int dni, categoria; //cat 1/2/3
    Fecha nac;
};


int edad(Fecha nac, Fecha hoy) {
    int aux = hoy.año - nac.año; //guarda simplemente la diferencia total de años
    if (hoy.dia >= nac.dia && hoy.mes >= nac.mes)
    {
        return aux;
    }
    else
    {
        return aux - 1;
    }
    
};

void actualizar(vector<Socio> lista, Fecha hoy) {

    for (int i = 0; i < lista.size(); i++)
    {
        if (edad(lista[i].nac, hoy) <= 12)
        {
            lista[i].categoria = 1;
        }
        else if (edad(lista[i].nac, hoy) <= 18)
        {
            lista[i].categoria = 2;
        }
        else
        {
            lista[i].categoria = 3;
        }
        
    }
    
}; 


int main() {
    Fecha f_nac = {8,8,1994};
    Fecha f_hoy = {16,6,2025};
    int e = edad(f_nac, f_hoy);

    cout << e << endl;
    
    Socio prim = {"Juan", "Perez", 38055739,3, {8,8,1994}};
    
    cout << "Ingrese el Nro de socios: " << endl;
    int N;
    cin >> N;
    vector<Socio> v(N);

    float cat_1, cat_2, cat_3;
    cout << "Ingrese los valores de las cuotas x categ: " << endl;
    cout << "Categoría 1 (hasta 12 años inclusive): ";
    cin >> cat_1;
    cout << "Categoría 2 (hasta 18 años inclusive): ";
    cin >> cat_2;
    cout << "Categoría 3 (mayores de 18): ";
    cin >> cat_3;

    cout << "Ingrese los datos de los socios: ";
    for (int i = 0; i < N; i++)
    {
        cout << "Apellido: ";
        cin >> v[i].apellido;
        cout << "Nombre: "; 
        cin >> v[i].nombre;
        cout << "DNI: ";
        cin >> v[i].dni;
        cout << "Fecha de Nacimiento: " << endl;
        cout << "Dia: ";
        cin >> v[i].nac.dia;
        cout << "Mes: ";
        cin >> v[i].nac.mes;
        cout << "Año: ";
        cin >> v[i].nac.año;
        
        if (edad(v[i].nac, f_hoy) <= 12)
        {
            v[i].categoria = 1;
        }
        else if (edad(v[i].nac, f_hoy) <= 18)
        {
            v[i].categoria = 2;
        }
        else
        {
            v[i].categoria = 3;
        }
        
        cout << "Proximo socio: " << endl;        
    }
    
    actualizar(v,f_hoy);
    

    float suma = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i].categoria == 1)
        {
            suma = suma + cat_1;
        }
        else if (v[i].categoria == 2)
        {
            suma = suma + cat_2;
        }
        else
        {
            suma = suma + cat_3;
        }        
    }

    cout << "La recaudacion total será: " << suma;
    return 0;
}