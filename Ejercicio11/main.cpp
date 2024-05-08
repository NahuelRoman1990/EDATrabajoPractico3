#include <iostream>
#include <cstring>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//11. Hacer una estructura llamada Corredor, en la cual se tendr�n los siguientes campos: Nombre, Nombre, sexo, club, pedir
//datos al usuario para un corredor, y asignarle una Categor�a de competici�n (use strcpy para copiar a la variable) seg�n
//sea su categor�a: 1 - Juvenil menor (hasta 18 a�os) 2- Se�or menor (hasta 40 a�os) 3- Veterano (desde +40 a�os)

using namespace std;

// definimos la esctructura del corredor	
	struct Corredor {
		char nombre[50];
		char apellido[50];
		char sexo;
		char club[50];
		int edad;
		char categoria[20];
	};
	
	// Definiremos para asignar categor�a seg�n la edad
	
	void categoriaPorEdad(Corredor ejemplo){
		if(ejemplo.edad <= 18){
			strcpy(ejemplo.categoria, "Juvenil menor");
		} else if (ejemplo.edad <= 40){
			strcpy(ejemplo.categoria, "Se�or menor");
		} else {
			strcpy(ejemplo.categoria, "Veterano");
		}
	}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");

	Corredor corredor;
	cout <<"Ingrese nombre del corredor: ";
	cin.getline(corredor.nombre,50);
	cout <<"Ingrese apellido del corredor: ";
	cin.ignore(); // debemos limpiar el buffer 
	cin.getline(corredor.apellido,50);
	cout <<"Ingrese el sexo del corredor (M/F): ";
	cin >> corredor.sexo;
	cout << "Ingrese el Club: ";
	cin.ignore();
	cin.getline(corredor.club,50);
	cout << "Ingrese la edad del corredor: ";
	cin >> corredor.edad;

	// tenindo la edad llamamos la funcion que clasifica
	categoriaPorEdad(corredor);
	
	// Reportamos los datos
	cout << "\nInformacion del corredor:" << endl;
    cout << "Nombre: " << corredor.nombre << endl;
    cout << "Sexo: " << corredor.sexo << endl;
    cout << "Club: " << corredor.club << endl;
    cout << "Edad: " << corredor.edad << endl;
    cout << "Categoria: " << corredor.categoria << endl;
	
	return 0;
}
