#include <iostream>
#include <string.h>|
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Escribe un programa que pida tres nombres animales al usuario, y muestre su letra capital y longitud (strchr y strlen)


int main(int argc, char** argv) {
	
	string animal1, animal2, animal3;
	
	cout << "ingrese el nombre de 3 animales" << endl;
	getline(animal1, 20);
	cout << "ingrese el nombre de 3 animales" << endl;
	cin.getline(animal2, 20);
	cout << "ingrese el nombre de 3 animales" << endl;
	cin.getline(animal3, 20);
	
	char letra1 = strchr(animal1,0);
	int longitud1 = strlen(animal1);
	
	cout << lentra1, longitud << endl;

	return 0;
}
