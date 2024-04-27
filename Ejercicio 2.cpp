#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main(int argc, char** argv) {
	string cad1, cad2, cad3, result;
	cout << "Ingresa el nombre de 3 animales" << endl;
	cout << "Primer animal" << endl;
	cin >> cad1;
	cout << "Segundo animal" << endl;
	cin >> cad2;
	cout << "Tercer animal" << endl;
	cin >> cad3;
	
		for(size_t i = 0; i < cad1.size(); ++i) {
		cad1[i] = tolower(cad1[i]);
	}
	
	for(size_t i = 0; i < cad2.size(); ++i) {
		cad2[i] = tolower(cad2[i]);
	}
	
	result = cad1.substr(0, 2)+cad2.substr(0, 2)+cad3.substr(0, 2);
	
	cout << "Las primeras letras concatenadas de estos animales es: "<< result << endl;
	
    if(cad1 == cad2) {
		cout << "El primer animal, " << cad1 << ", es igual al que pusiste en segundo lugar, " << cad2 << "." << endl;
	} else {
		cout << "El primer animal, " << cad1 << ", no es igual al que pusiste en segundo lugar, " << cad2 << "." << endl;
		
	}
	return 0;
}
