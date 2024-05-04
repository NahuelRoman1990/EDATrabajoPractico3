#include <iostream>
#include <string>
#include <cstring>

using namespace std;

enum Condimento { Sal, Pimienta, Ajo, Oregano, Perjil, Aceite };

struct Ingrediente {
    char producto[50];
    float gramos;
    double precio;
    string fechaElaboracion;
};

struct Plato {
    string receta;
    string tiempo;
    Ingrediente ingredientes[4];
    Condimento condimentos[2];
};

string formatoFecha(string fecha) {
	string dia = fecha.substr(0.2);
	string mes = fecha.substr(2.2);
	string anio = fecha.substr(4.4);
	return dia + "/" + mes + "/" + anio;
}
int main(int argc, char** argv) {
	
	Ingrediente cebollas, caldos;
	strcpy(cebollas.producto, "Cebollas");
	cebollas.gramos = 200;
	cebollas.precio = 250.99;
	cebollas.fechaElaboracion = "03/05/2024";
	
	strcpy(caldos.producto, "Caldos");
	caldos.gramos = 38;
	caldos.precio = 150;
	caldos.fechaElaboracion = "03/05/2024";
	
	Ingrediente ingrediente, ingrediente1;
	cout << "Ingrese el ingrediente: " << endl;
	cin.getline(ingrediente.producto, 20,'\n');
	
		cout << "Ingrese el peso en gramos: ";
	cin >> ingrediente.gramos;
	
		cout << "Ingrese el precio: ";
	cin >> ingrediente.precio;
	
    cout << "Ingrese fecha de elaboracion **/**/****: ";
	cin >> ingrediente.fechaElaboracion;
	cin.ignore();
	cout << "Ingrese el ingrediente: " << endl;
	cin.getline(ingrediente1.producto, 20,'\n');
	
		cout << "Ingrese el peso en gramos: ";
	cin >> ingrediente1.gramos;
	
		cout << "Ingrese el precio: ";
	cin >> ingrediente1.precio;
	
    cout << "Ingrese fecha de elaboracion **/**/****: ";
	cin >> ingrediente1.fechaElaboracion;
	
	return 0;
}
