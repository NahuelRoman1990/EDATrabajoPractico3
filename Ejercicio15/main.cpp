#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos decimal: nota1, nota2, nota3; y otro llamada
//alumno que tendrá los siguientes miembros: matricula, nombre, sexo, asistencia; hacer que la estructura promedio este
//anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por último
//imprimir sus datos incluido su promedio. Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre


// La estructura de las notas
struct Promedio {
    float nota1; // float porque puede ser con coma la nota
    float nota2;
    float nota3;
};
// la estructura de los alumnos 
struct Alumno {
    int matricula;
    string nombre;
    char sexo;
    int asistencia;
    Promedio promedio; // estructura promedio esta anidada en la estructura alumno
};

// debemos hacer una funcion que pomedie
float calcularPromedio(Promedio prom) {
    return (prom.nota1 + prom.nota2 + prom.nota3) / 3.0;
}

int main(int argc, char** argv) {
	// genermos 2 alumnos
	Alumno alumno1;
	Alumno alumno2;
	
	// pedimos los datos
	cout << "Datos del alumno1:" << endl;
    cout << "Matricula: ";
    cin >> alumno1.matricula;
    cout << "Nombre: ";
    cin.ignore(); // Limpiar el buffer del salto de línea anterior
    getline(cin, alumno1.nombre);
    cout << "Sexo (M/F) : ";
    cin >> alumno1.sexo;
    cout << "Asistencia: ";
    cin >> alumno1.asistencia;
    cout << "Nota 1: ";
    cin >> alumno1.promedio.nota1;
    cout << "Nota 2: ";
    cin >> alumno1.promedio.nota2;
    cout << "Nota 3: ";
    cin >> alumno1.promedio.nota3;
	// calucamos su promedio
	float promedio1 = calcularPromedio(alumno1.promedio);
	
	
	 // Pedir datos de alumno2
    cout << "\nDatos del segundo alumno:" << endl;
    cout << "Matricula: ";
    cin >> alumno2.matricula;
    cout << "Nombre: ";
    cin.ignore(); /// Limpiar el buffer del salto de línea anterior
    getline(cin, alumno2.nombre);
    cout << "Sexo (M/F): ";
    cin >> alumno2.sexo;
    cout << "Asistencia: ";
    cin >> alumno2.asistencia;
    cout << "Nota 1: ";
    cin >> alumno2.promedio.nota1;
    cout << "Nota 2: ";
    cin >> alumno2.promedio.nota2;
    cout << "Nota 3: ";
    cin >> alumno2.promedio.nota3;
// calucamos su promedio
    float promedio2 = calcularPromedio(alumno2.promedio);
    
    //datos del Alumno1:
     cout << "\nDatos del primer alumno:" << endl;
    cout << "Matricula: " << alumno1.matricula << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Asistencia: " << alumno1.asistencia << endl;
    cout << "Promedio: " << promedio1 << endl;
    //datos del Alumno2:
    cout << "\nDatos del segundo alumno:" << endl;
    cout << "Matricula: " << alumno2.matricula << endl;
    cout << "Nombre: " << alumno2.nombre << endl;
    cout << "Sexo: " << alumno2.sexo << endl;
    cout << "Asistencia: " << alumno2.asistencia << endl;
    cout << "Promedio: " << promedio2 << endl;
    
    // mejor promedio
    if (promedio1 > promedio2) {
        cout << "\nMejor promedio lo tiene: " << alumno1.nombre << endl;
    } else if (promedio2 > promedio1) {
        cout << "\nMejor promedio lo tiene: " << alumno2.nombre << endl;
    } else {
        cout << "\nAmbos alumnos tienen el mismo promedio." << endl;
    }
    
	return 0;
}
