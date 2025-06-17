#include <iostream>;
using namespace std;

struct Equipo {
    string nombre;
    int ganados, empatados, perdidos;
}

int calcular_puntaje(Equipo e) {    //Observar que ahora "Equipo" es un tipo de dato
    return e.ganados * 3 + e.empatados;
}

Equipo leer_equipo() {
    Equipo e;
    cout << "Nombre: ";
    getline(cin, e.nombre);
    cout << "Partidos ganados: "
    cin >> e.ganados
    cout << "Partidos empatados: "
    cin >> e.empatados
    cout << "Partidos perdidos: "
    cin >> e.perdidos
    cin.ignore(); //Siempre hay problemas pasando de ">>" a getline. Debo usar esta linea
    return e;
}

int main() {
    Equipo boca = { "Boca", 20, 0, 0}; //Puedo declararlo directamente

    Equipo e;
    cout << "Nombre: ";
    getline(cin, e.nombre);
    cout << "Partidos ganados: "
    cin >> e.ganados
    cout << "Partidos empatados: "
    cin >> e.empatados
    cout << "Partidos perdidos: "
    cin >> e.perdidos
    return 0;
    //Puedo declararlo parte por parte

    Equipo e1 = leer_equipo();
    Equipo e2 = leer_equipo();
    //Lo puedo cargar con funciones 

    //Lo puedo guardar en vectores:
    int n;
    cin >> n;
    vector<Equipo> v(n);
    for (size_t i = 0; i < v.size; i++) {
        v[i] = leer_equipo();
    }

    pair<int, int> buscar_mejores(const vector<Equipo> &v) {
        int pts_primero = -1;
        int idx_primero = -1;
        for (size_t i = 0; i < v.size; i++)
        {
            int pts = calcular_puntaje(v[i]);
            if (pts > pts_primero)  
            {
                pts_segundo = pts_primero;
                idx_segundo = idx_segundo;
                pts_primero = pts;
                idx_segundo = i;
            }
            else if (pts > pts_segundo)
            {
                pts_segundo = pts;
                idx_segundo = i;
            }
            return { idx_primero, idx_segundo}         
            
        }
        
    }
    
}

//Los structs tambien sirven cuando una funcion outputea o necesita demasiados inputs. Se le pasa o se le devuelve un struct con la plantilla de argumentos necesaria, el cuál se crea en otro bloque. Esto hace más clara la sintaxis del prototipo y ayuda al compilador a detectar ciertos errores. 

struct Alumno
{
    string nombre;
    vector<int> notas; //La inicializacion con parentesis no sirve dentro de structs. Debo resizear el vector del struct en main al usarlo, SIEMPRE
};

struct Curso
{
    vector<Alumno> a;
}
//Esto se vuelve engorroso rápidamente... (no habra de esto en el parcial, se limita a un vector en un struct o visceversa)
//c es un curso

Curso c;
cin >> c.codigo;
c.a.resize(30);


//hay formas de resolve este vericueto:
//Separar el manejo de nuestro objeto en multiples funciones:
void mostrar_alumno(const Alumno &a) {
cout << " DNI: " << a.dni << endl;
cout << " Notas:";
for(int x:a.notas)
cout << " " << x;
cout << endl;
}
void mostrar_curso(const Curso &c) {
cout << "Curso " << c.codigo << endl;
for(size_t i=0;i<c.a.size();i++) {
cout << "Alumno " << i+1 << endl;
mostrar_alumno(c.a[i]);
}
}

//Usar el for abreviado:
for (Alumno &un_alumno : c.a) {
cin >> un_alumno.dni;
un_alumno.notas.resize(5);
for (int &una_nota : un_alumno.notas)
cin >> una_nota;
}
//Realizar el ejemplo 10 (es parecido a lo que tomaran en el parcial)