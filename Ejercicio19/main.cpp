#include <iostream>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//19. En un comercio trabajan 6 vendedores. Defina la estructura principal vendedor se dese saber: nombre, legajo, sector.
//Se guardan sus ventas clasificadas por rubro, por lo que debes hacer un array de estructuras ventas con códigos 01 al 04,
//concepto: bazar, accesorios, indumentaria, calzados; y de cada una su total vendido. El vendedor asocia sus ventas_rubro
//Realice un programa que permita:
//a. Cargar los datos de un arreglo de 3 vendedores, con sus ventas en rubro
//b. Mostrar por cada vendedor, las ventas en cada rubro (esta información debe ser almacenada en la segunda estructura)

//primero debemos declarar la estructura VentasPorRubro para usarlo en la estructura de vendedor porque si no, no compila 

// Mostrar por cada vendedor, las ventas en cada rubro (esta información debe ser almacenada en la segunda estructura)
struct VentasPorRubro {
    string concepto;
     float total_vendido;
};

//estructura principal vendedor
struct Vendedor {
    string nombre;
    int legajo;
    string sector;
    VentasPorRubro ventas_rubro[4]; // Array de ventas por rubro
};




int main(int argc, char** argv) {
	
	int cantiVendedores = 3;
	Vendedor vendedores[3];
	string rubros[4] = {"Bazar", "Accesorios", "Indumentaria", "Calzados"};
	    // ingressamos los datos de los vendedores y sus respectivas ventas por rubro
    for (int i = 0; i < cantiVendedores; ++i) {
        cout << "Ingrese datos del vendedor " << i + 1 << ":" << endl;
        cout << "Nombre :";
        cin >> vendedores[i].nombre;
        cout << "Legajo: ";
        cin >> vendedores[i].legajo;
        cout << "Sector: ";
        cin >> vendedores[i].sector;

        cout << "Ingrese las ventas por rubro para el vendedor " << vendedores[i].nombre << ":" << endl;

			// se podia hacer con un for pero no encontre la forma de ir cambiando los nombres de las ventas, podria ser con un array
			// de una string rubros[4] = {"Bazar", "Accesorios", "Indumentaria", "Calzados"};
			
			
            cout << "Total vendido en concepto de venta Bazar (01):";
            vendedores[i].ventas_rubro[0].concepto = "01";
            cin >> vendedores[i].ventas_rubro[0].total_vendido;
            
            cout << "Total vendido en concepto de venta Accesorios (02): ";
            vendedores[i].ventas_rubro[1].concepto = "02";
            cin >> vendedores[i].ventas_rubro[1].total_vendido;
            
            cout << "Total vendido concepto de venta Accesorios (03)): ";
            vendedores[i].ventas_rubro[2].concepto = "03";
            cin >> vendedores[i].ventas_rubro[2].total_vendido;
            
            cout << "Total vendido en concepto de venta de Calzados (04): ";
            vendedores[i].ventas_rubro[3].concepto = "04";
            cin >> vendedores[i].ventas_rubro[3].total_vendido;
        
        cout << endl;
    }
    
    // ventas por rubro de cada vendeedor
    for (int i = 0; i < cantiVendedores; ++i) {
        cout << "Ventas de " << vendedores[i].nombre << ":" << endl;
        for (int j = 0; j < 4; ++j) {
            cout << "Rubro: " << vendedores[i].ventas_rubro[j].concepto << ", total vendido: " << vendedores[i].ventas_rubro[j].total_vendido << endl;
        }
        cout << endl;
    }
	
	return 0;
}
