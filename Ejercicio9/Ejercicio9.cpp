#include <iostream>
#include <string>

using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};


struct Persona {
    string nombre;
    int edad;
    float peso;
    Fecha fechaNacimiento;
};


struct Trabajador {
    Persona persona;
    float salario;
};

int main() {
    
    Persona personaSinOficio = {"Maluma", 30, 75.5, {15, 5, 1991}};

    
    Trabajador trabajador = {{"Juanito", 25, 70.2, {27, 12, 1990}}, 2500.0};

    
    cout << "Datos de la Persona sin oficio:" << endl;
    cout << "Nombre: " << personaSinOficio.nombre << endl;
    cout << "Edad: " << personaSinOficio.edad << endl;
    cout << "Peso: " << personaSinOficio.peso << endl;
    cout << "Fecha de Nacimiento: " << personaSinOficio.fechaNacimiento.dia << "/" 
         << personaSinOficio.fechaNacimiento.mes << "/" << personaSinOficio.fechaNacimiento.anio << endl;

    
    cout << "\nDatos del Trabajador:" << endl;
    cout << "Nombre: " << trabajador.persona.nombre << endl;
    cout << "Edad: " << trabajador.persona.edad << endl;
    cout << "Peso: " << trabajador.persona.peso << endl;
    cout << "Fecha de Nacimiento: " << trabajador.persona.fechaNacimiento.dia << "/" 
         << trabajador.persona.fechaNacimiento.mes << "/" << trabajador.persona.fechaNacimiento.anio << endl;
    cout << "Salario: $" << trabajador.salario << endl;

    return 0;
}

