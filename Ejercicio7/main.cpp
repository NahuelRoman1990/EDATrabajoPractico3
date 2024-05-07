#include <iostream>
#include <string.h>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos valores (fuera
//del main): Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 15hs. El registro profesor
//debe incluir a otro registro materia. Luego en el main, muestre ambos profesores concatenados a sus materias.
//Sugerencia getline para los char[].

	//Estrucura de la materia
	struct Materia {
		string nombreDeMateria;
		int cargaHoraria;
	};
	//Estructura del profesor
	struct Profesor{
		string nombre;
		string cargo;
		Materia materia; //materia tiene el nombre y la carga horaria
	}; 
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");
	//Generamos las 2 materias
	Materia materia1 = {"Gestión de datos",20};
	Materia materia2 = {"Matemática",15};
	//Generamos los 2 profesores
	Profesor profesor1 = {"Cristina", "Titular", materia1};
	Profesor profesor2 ={"Fabiana","Jefa TP", materia2};
	
	cout << "Profesor " << profesor1.nombre << ", " << profesor1.cargo << ", " << profesor1.materia.nombreDeMateria << ", " << profesor1.materia.cargaHoraria << "hs" << endl;
	cout << "Profesor " << profesor2.nombre << ", " << profesor2.cargo << ", " << profesor2.materia.nombreDeMateria << ", " << profesor2.materia.cargaHoraria << "hs" << endl;
	return 0;
}
