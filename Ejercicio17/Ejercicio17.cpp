#include <iostream>
#include <string>

using namespace std;

const int numPersonas = 4;
struct Persona { 
    string nombre;
    bool tieneDiscapacidad;
} personas[numPersonas];

int main() {
   
    personas[0] = {"Nahuel", false};
    personas[1] = {"Barbara", true};
    personas[2] = {"Lucas", true};
    personas[3] = {"Ariel", false};

    cout << "Personas con discapacidad verdadera:" << endl;
    for (int i = 0; i < numPersonas; i++) { 
        if (personas[i].tieneDiscapacidad) {
            cout << "Nombre: " << personas[i].nombre << ", Tiene discapacidad: Si" << endl;
        }
    }

    cout << "\nPersonas con discapacidad falsa:" << endl;
    for (int i = 0; i < numPersonas; i++) {
        if (!personas[i].tieneDiscapacidad) {
            cout << "Nombre: " << personas[i].nombre << ", Tiene discapacidad: No" << endl;
        }
    }

    return 0;
}

