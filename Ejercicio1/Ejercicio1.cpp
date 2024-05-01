#include <iostream>
#include <cstring>
#include <cctype> // Para toupper

int main() {
    char animal1[20], animal2[20], animal3[20];

    std::cout << "Introduce el nombre del primer animal: ";
    std::cin >> animal1;

    int long1 = strlen(animal1);
    char primerA = toupper(animal1[0]);

    std::cout << "Numero de letras para " << animal1 << " es " << long1 << ", letra: " << primerA << ".\n";
    
    std::cout << "Introduce el nombre del segundo animal: ";
    std::cin >> animal2;

    int long2 = strlen(animal2);
    char primerB = toupper(animal2[0]);

    std::cout << "Numero de letras para " << animal2 << " es " << long2 << ", letra: " << primerB << ".\n";
    
    std::cout << "Introduce el nombre del tercer animal: ";
    std::cin >> animal3;

    int long3 = strlen(animal3);
    char primerC = toupper(animal3[0]);

    std::cout << "Numero de letras para " << animal3 << " es " << long3 << ", letra: " << primerC << ".\n";
    
    return 0;
}

