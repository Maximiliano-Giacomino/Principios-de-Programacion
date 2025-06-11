struct Alumno {
    string nombre;
    int dni;
    float promedio;
}
//Esta plantilla crea un tipo de dato en nuestro programa. Las ventajas radican en la claridad de la sintaxis y en que pueden guardar tipos de datos mezclados, a diferencia de los vectores. A diferencia de los vectores, no se puede ciclar por sus datos facilmente.

Alumno x = { "Adan", 1, 8.75}; //se crea un objeto de tipo alumno
cout << "Nombre: " << x.nombre << endl; //se outputea el nombre de dicho alumno