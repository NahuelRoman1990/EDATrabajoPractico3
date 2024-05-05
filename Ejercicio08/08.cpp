/*
Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior. 
Llamada Empleado que guarda nombre, Dirección (de tipo infoDireccion), y salario. 
a- Declare un arreglo de 2 empleados. Desde la funcion main: 
b- Cargue las estrcuturas Empleado. 
c- Muestre ambos empleados.
*/

#include <iostream>
#include <string>

using namespace std;

struct infoDireccion {
    string calle;
    string ciudad;
    string provincia;
};


struct Empleado {
    string nombre;
    infoDireccion direccion;
    double salario;
};

int main() {
    
    Empleado empleados[2];

    infoDireccion dir1 = {"Calle 123", "Buenos Aires", "Buenos Aires"};
    infoDireccion dir2 = {"Avenida 456", "Rosario", "Santa Fe"};
    
    empleados[0] = {"Juan", dir1, 50000.0};
    empleados[1] = {"Ana", dir2, 55000.0};

    
    for(int i = 0; i < 2; i++) {
        std::cout << "Empleado " << i+1 << ":\n";
        std::cout << "Nombre: " << empleados[i].nombre << "\n";
        std::cout << "Direccion: " << empleados[i].direccion.calle << ", " << empleados[i].direccion.ciudad << ", " << empleados[i].direccion.provincia << "\n";
        std::cout << "Salario: " << empleados[i].salario << "\n\n";
    }

    return 0;
}
