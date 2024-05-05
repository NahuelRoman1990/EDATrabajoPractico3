/*
12. Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes 
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 becados, comprobar 
cuál de los 3 tiene el mejor promedio y luego imprimir datos del becado. 
Use strcasecmp para comparar las cadenas y determinar si sus nombres son iguales. 
Ej.: Marco Sosa y Marco Perez.
*/

#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[20];
    char apellido[20];
    int edad;
    float promedio;
};

int main() {
	
	    Estudiante estudiantes[3];
    	int mejorPromedio = 0;
    	bool flag = true;

    	for (int i = 0; i < 3; ++i) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin.getline(estudiantes[i].nombre, 20);
        
        cout << "Ingrese el apellido del estudiante " << i+1 << ": ";
        cin.getline(estudiantes[i].apellido, 20);

        cout << "Ingrese la edad del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].edad;

        cout << "Ingrese el promedio del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].promedio;

        cin.ignore();

        cout << endl;
        
        
        if (estudiantes[i].promedio > estudiantes[mejorPromedio].promedio) {
            mejorPromedio = i;
        }
        
    }
    
    cout << "El becado con el mejor promedio es:" << endl;
    cout << "Nombre: " << estudiantes[mejorPromedio].nombre << endl;
    cout << "Apellido: " << estudiantes[mejorPromedio].apellido << endl;
    cout << "Edad: " << estudiantes[mejorPromedio].edad << endl;
    cout << "Promedio: " << estudiantes[mejorPromedio].promedio << endl;
    
    for (int i = 0; i < 2; ++i) {
    	
    	for (int j = i + 1; j < 3; ++j) {
    		
    		int resultado = strcasecmp(estudiantes[i].nombre, estudiantes[j].nombre);
    		
    		if(resultado == 0){
    			cout << "El becado " << i + 1 << " y el becado " << j + 1 << " tienen el mismo nombre: " << estudiantes[i].nombre << endl;
			    flag = false;
			}
    		
		}
    	
    }
    
    if (flag){
    	
    	cout << "Los becados no tienen nombres iguales" << endl;
	}
	
	return 0;
}

