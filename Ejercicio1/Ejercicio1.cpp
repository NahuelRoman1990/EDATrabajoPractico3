#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
    char animal1[20], animal2[20], animal3[20];

    cout << "Introduce el nombre del primer animal: " << std::endl;
    cin.getline(animal1, 20, '\n');

    int long1 = strlen(animal1);
    char primerA = std::toupper(animal1[0]);

    cout << "Numero de letras para " << animal1 << " es " << long1 << ", letra: " << primerA << ".\n" << std::endl;

    cout << "Introduce el nombre del segundo animal: " << std::endl;
    cin.getline(animal2, 20, '\n');

    int long2 = strlen(animal2);
    char primerB = std::toupper(animal2[0]);

    cout << "Numero de letras para " << animal2 << " es " << long2 << ", letra: " << primerB << ".\n" << std::endl;

    cout << "Introduce el nombre del tercer animal: " << std::endl;
    cin.getline(animal3, 20, '\n');

    int long3 = strlen(animal3);
    char primerC = std::toupper(animal3[0]);

    cout << "Numero de letras para " << animal3 << " es " << long3 << ", letra: " << primerC << ".\n" << std::endl;

    return 0;
}


