/*
A- Master chef. 
Diseñe un struct Ingrediente en el que se ingrese producto, gramos, fecha de elaboración, y sus respectivos precios, 
para la preparación de un struct Plato, que tiene una receta, tiempo (hora-minuto), y un arreglo de 4 ingredientes. 
Además, el platillo contendrá 2 Condimentos, estructura tipo enum que tiene: Sal, Pimienta, Ajo, Oregano, Perjil, Aceite.

o Precargar dos Ingrediente con strcpy: Cebollas, 150gr. $399.9, Caldos: 38gr. 150$ el cubo, Morrón 82gr. $456.
o Crear dos Ingrediente leído con getline: Ej. Hongos, 25gr. $345 y Pechuga 350gr. $959.99
o Crear un platillo a partir de esos ingredientes
o Mostrar el plato y sus ingredientes.
o Mostrar el costo final a gastar en dos platillos diferentes.
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

enum Condimento { Sal, Pimienta, Ajo, Oregano, Perjil, Aceite };

struct Ingrediente {
    string producto;
    float gramos;
    float precio;
    string fechaElaboracion;
};

struct Plato {
    string receta;
    string tiempo;
    Ingrediente ingredientes[4];
    Condimento condimentos[2];
};

int main() {
	
    float costoTotal = 0;
    Ingrediente ingredientes[4];
    ingredientes[0] = {"Cebollas", 150, 399.9, "05/04/2024"};
    ingredientes[1] = {"Caldos", 38, 150, "04/03/2024"};

	for (int i = 2; i < 4; ++i) {
        cout << "Ingrese el nombre del ingrediente " << i + 1 << ": ";
        getline(cin, ingredientes[i].producto);
        cout << "Ingrese los gramos del ingrediente " << i + 1 << ": ";
        cin >> ingredientes[i].gramos;
        cout << "Ingrese el precio del ingrediente " << i + 1 << ": ";
        cin >> ingredientes[i].precio;
        cin.ignore();
        cout << "Ingrese la fecha de elaboracion del ingrediente " << i + 1 << " (DD/MM/AAAA): ";
        getline(cin, ingredientes[i].fechaElaboracion);
    }

	cout << endl;

    Plato plato{"Sopa de pollo", "1h:10m", {ingredientes[0], ingredientes[1], ingredientes[2], ingredientes[3]}, {Sal, Pimienta}};
   
    cout << "Plato: " << plato.receta << endl;
    cout << "Tiempo de preparacion: " << plato.tiempo << endl;
    cout << "Ingredientes:" << endl;
    
    for (int i = 0; i < 4; ++i) {
        cout << "- " << plato.ingredientes[i].producto << " (" << plato.ingredientes[i].gramos << " gr), Precio: $" 
             << plato.ingredientes[i].precio << ", Fecha de elaboracion: " << plato.ingredientes[i].fechaElaboracion << endl;
    }

    
    for (int i = 0; i < 4; ++i) {
        costoTotal += plato.ingredientes[i].precio;
    }
    cout << "Costo total del plato: $" << costoTotal << endl;

    return 0;
}
