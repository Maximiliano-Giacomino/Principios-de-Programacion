#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "matrix"
using namespace std;

// Ej 2 (35pts). a) Escriba un programa C++ que lea los presupuestos anuales asignados a 10 hospitales de
// una provincia al inicio del año 2023 destinado a insumos. Estos datos se leen de a pares: cod hospital
// (1..10), monto del presupuesto anual. Luego se deben ingresar los 4 datos de cada gasto efectuado por
// cada hospital en el año: cod. hospital (1..10), dia (1..31), mes (1..12), monto.. Estos datos terminan con
// cod. hospital cero. El programa debe organizar una matriz de 10 filas (hospitales) por 12 columnas
// (meses) donde se indiquen en cada celda los montos por gastos de cada hospital en cada mes del año
// 2023. Considere que en un mismo mes un mismo hospital puede realizar varios gastos por mes. Luego el
// programa de informar: b) Cuáles hospitales terminaron con déficit al finalizar el año (mayores gastos que
// el presupuesto anual); c) Por cada mes, cuántos hospitales tuvieron un gasto mayor al mes anterior; d) El
// mes y monto de mayor gasto de un hospital que el usuario ingresa como dato.
// Nota: para los puntos c) y d) debe utilizar funciones.


void mostrar_mat(matrix<int> matriz) {
    for (int i = 0; i < matriz.size(0); i++)
    {
        for (int j = 0; j < matriz.size(1); j++)
        {
            cout << setfill('.');
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;        
    }
    
}
// c) Por cada mes, cuántos hospitales tuvieron un gasto mayor al mes anterior
void aumento_gasto(matrix<int> matriz) {
    for (int mes = 1; mes < 12; mes++)
    {
        int contador = 0;
        for (int hosp = 0; hosp < 10; hosp++)
        {
            if (matriz[hosp][mes] > matriz[hosp][mes-1])
            {
                contador = contador + 1;
            }            
        }
        cout << "El mes nro " << mes << "del corriente año, " << contador << " hospital/es aumentaron sus gastos.";        
    }    
};

//returns the number of the month and the amount of the highest spend
pair<int, int> mayor_gasto(const matrix<int> &matriz, int cod_hosp) {
    int mayor = -1;
    int pos = -1;
    for (int j = 0; j < 12; j++)
    {
        if (matriz[cod_hosp][j] > mayor)
        {
            mayor = matriz[cod_hosp][j];
            pos = j;
        }
    }
    return {pos, mayor};    
};

int main() {
    matrix<int> gastos(10,12);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            gastos[i][j] = 0;
        }
        
    }

    vector<float> presup(10);
    cout << "Ingrese los pares de datos con los presupuestos: (Cod. 1-10, Monto): ";
    pair<int, float> p;
    for (int i = 0; i < presup.size(); i++)
    {
        cin >> p.first >> p.second;
        presup[p.first - 1] = p.second;
        cout << "Próximo dato: ";
    }

    int cod, dia, mes;
    float monto;
    cout << "Ingrese el cod. hosp, dia, mes y monto del gasto: ";
    cin >> cod;
    cin >> dia;
    cin >> mes;
    cin >> monto;
    while (cod!=0)
    {
        gastos[cod-1][mes-1] = gastos[cod-1][mes-1] + monto;
        mostrar_mat(gastos);
        cout << "Proximo: ";
        cin >> cod;
        cin >> dia;
        cin >> mes;
        cin >> monto;
    }

    /////////////////// Inciso A resuelto ///////////////////
    //b) Cuáles hospitales terminaron con déficit al finalizar el año (mayores gastos que
    // el presupuesto anual)
    for (size_t i = 0; i < presup.size(); i++)
    {
        int suma_hospital = 0;
        for (int j = 0; j < 12; i++)
        {
            suma_hospital = suma_hospital + gastos[i][j];
        }
        if (suma_hospital>presup[i])
        {
            cout << "El hospital cuyo código es " << i << " se ha excedido en el presupuesto." << endl;
        }       
    }
    
    
    return 0; 
}