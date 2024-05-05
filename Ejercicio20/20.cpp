/*
Una empresa necesita el registro tanto de sus Empleados, como de sus Clientes, de ambos requiere 
los datos de su domicilio Ej. provincia en que viven, el barrio, la calle, y altura, 
si esEdificio o no. Además de sus empleados guardamos el legajo, su puesto, y su sueldo. 
Plantearlo con estructuras anidadas, si además tenemos del Cliente el nombre, correo, teléfono, y domicilio 
de residencia. Luego CARGAR arreglos de 10 clientes y 5 empleados. 
Luego Mostrar en consola:
a. Donde viven los 10 clientes, y su nombre.
b. Datos de los Empleados con sueldos de más de $50000
c. Correo y teléfono, de clientes que viven en edificio
d. Datos de los Empleados con puesto de vendedor
e. Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antigüedad
*/

#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

struct Domicilio {
    char provincia[50];
    char barrio[50];
    char calle[50];
    int altura;
    bool esEdificio;
};

struct Cliente {
    char nombre[50];
    char correo[50];
    char telefono[15];
    Domicilio domicilio;
};

struct Empleado {
    int nroLegajo;
    char nombre[50];
    char apellido[50];
    int antiguedad;
    char puesto[50];
    float sueldo;
    Domicilio domicilio;
};

int main() {
    setlocale(LC_ALL, "Spanish");

	//no me quedo claro como pide el enunciado que cargue los datos asi que dejo las dos formas.

/*
    Empleado empleados[5];
    Cliente clientes[10];

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese los datos del empleado " << i + 1 << ":" << endl;
        cout << "Legajo: ";
        cin >> empleados[i].nroLegajo; 
        cout << "Nombre: ";
        cin.ignore();
        cin.getline(empleados[i].nombre, 50);
        cout << "Apellido: ";
        cin.getline(empleados[i].apellido, 50);
        cout << "Antiguedad: ";
        cin >> empleados[i].antiguedad;
        cout << "Puesto: ";
        cin.ignore();
        cin.getline(empleados[i].puesto, 50);
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cout << "Domicilio:" << endl;
        cout << "Provincia: ";
        cin.ignore();
        cin.getline(empleados[i].domicilio.provincia, 50);
        cout << "Barrio: ";
        cin.getline(empleados[i].domicilio.barrio, 50);
        cout << "Calle: ";
        cin.getline(empleados[i].domicilio.calle, 50);
        cout << "Altura: ";
        cin >> empleados[i].domicilio.altura;
        cout << "Es un edificio? (0 = No, 1 = Si): ";
        cin >> empleados[i].domicilio.esEdificio;
    }

    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese los datos del cliente " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin.ignore();
        cin.getline(clientes[i].nombre, 50);
        cout << "Correo: ";
        cin.getline(clientes[i].correo, 50);
        cout << "Telefono: ";
        cin.getline(clientes[i].telefono, 15);
        cout << "Domicilio:" << endl;
        cout << "Provincia: ";
        cin.getline(clientes[i].domicilio.provincia, 50);
        cout << "Barrio: ";
        cin.getline(clientes[i].domicilio.barrio, 50);
        cout << "Calle: ";
        cin.getline(clientes[i].domicilio.calle, 50);
        cout << "Altura: ";
        cin >> clientes[i].domicilio.altura;
        cout << "Es un edificio? (0 = No, 1 = Sí): ";
        cin >> clientes[i].domicilio.esEdificio;
    }
*/

    Cliente clientes[10] = {
    {"Juan Perez", "juan@gmail.com", "555-1234", {"Buenos Aires", "La Plata", "Av. 7", 123, false}},
    {"Maria Rodriguez", "maria@yahoo.com", "555-5678", {"Cordoba", "Nueva Cordoba", "Bv. Chacabuco", 456, true}},
    {"Carlos Sanchez", "carlos@outlook.com", "555-9012", {"Buenos Aires", "Ramos Mejia", "Av. Rivadavia", 789, false}},
    {"Laura Gomez", "laura@gmail.com", "555-3456", {"Santa Fe", "Rosario", "Av. Pellegrini", 1011, true}},
    {"Diego Fernandez", "diego@yahoo.com", "555-7890", {"Buenos Aires", "Quilmes", "Av. Calchaqui", 1213, false}},
    {"Ana Martinez", "ana@outlook.com", "555-2345", {"Mendoza", "Ciudad", "Av. San Martin", 1415, true}},
    {"Pablo Gonzalez", "pablo@gmail.com", "555-6789", {"Neuquen", "Centro", "Av. Argentina", 1617, false}},
    {"Sofia Diaz", "sofia@yahoo.com", "555-0123", {"Tucuman", "San Miguel de Tucuman", "Av. Belgrano", 1819, true}},
    {"Manuel Lopez", "manuel@outlook.com", "555-4567", {"Salta", "Centro", "Av. San Martin", 2021, false}},
    {"Lucia Castro", "lucia@gmail.com", "555-8901", {"Entre Rios", "Parana", "Av. Ramirez", 2223, true}}
    };

	Empleado empleados[5] = {
    {1001, "Carlos", "Gonzalez Perez", 2, "Vendedor", 55000, {"Buenos Aires", "Lanus", "Av. Hipolito Yrigoyen", 1234, false}},
    {1002, "Ana", "Rodriguez Gomez", 3, "Administrativo", 48000, {"Cordoba", "Nueva Cordoba", "Bv. Chacabuco", 567, true}},
    {1003, "Diego", "Martinez Lopez", 1, "Vendedor", 60000, {"Buenos Aires", "Quilmes", "Av. Calchaqui", 8910, false}},
    {1004, "Laura", "Fernandez Diaz", 5, "Gerente", 80000, {"Santa Fe", "Rosario", "Av. Pellegrini", 1112, true}},
    {1005, "Juan", "Perez Sanchez", 4, "Vendedor", 52000, {"Mendoza", "Ciudad", "Av. San Martin", 1314, true}}
	};

    cout << "a. Clientes y sus domicilios:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << clientes[i].nombre << " vive en " << clientes[i].domicilio.provincia << ", ";
        cout << clientes[i].domicilio.barrio << ", " << clientes[i].domicilio.calle << " " << clientes[i].domicilio.altura;
        if (clientes[i].domicilio.esEdificio) {
            cout << " (Edificio)";
        }
        cout << endl;
    }

    cout << "\nb. Empleados con sueldos mayores a $50000:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (empleados[i].sueldo > 50000) {
            cout << "Legajo: " << empleados[i].nroLegajo << ", Nombre: " << empleados[i].nombre << " " << empleados[i].apellido << ", Sueldo: " << empleados[i].sueldo << endl;
        }
    }

    cout << "\nc. Correo y telefono de clientes que viven en edificio:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (clientes[i].domicilio.esEdificio) {
            cout << "Nombre: " << clientes[i].nombre << ", Correo: " << clientes[i].correo << ", Telefono: " << clientes[i].telefono << endl;
        }
    }

    cout << "\nd. Datos de empleados con puesto de vendedor:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (strcmp(empleados[i].puesto, "vendedor") == 0) {
            cout << "Legajo: " << empleados[i].nroLegajo << ", Nombre: " << empleados[i].nombre << " " << empleados[i].apellido << ", Antiguedad: " << empleados[i].antiguedad << endl;
        }
    }

    return 0;
}

