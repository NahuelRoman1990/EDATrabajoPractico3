#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char frase1[50], frase2[50];

    cout << "Ingrese la primera frase: ";
    cin.getline(frase1, 50);

    cout << "Ingrese la segunda frase: ";
    cin.getline(frase2, 50);

    int comparacion = strncasecmp(frase1, frase2, 5);
    
    if (strstr(frase1, "la") != NULL && strstr(frase2, "la") != NULL) {
            cout << "Ambas frases contienen la subcadena 'la'.\n";
        } else if (strstr(frase1, "la") != NULL || strstr(frase2, "la") != NULL) {
            cout << "Solo una de las frases contiene la subcadena 'la'.\n";
        } else {
            cout << "Ninguna de las frases contiene la subcadena 'la'.\n";
        }

    if (comparacion == 0) {
        cout << "Las primeras cinco letras coinciden en ambas frases.\n";

    } else {
        cout << "Las primeras cinco letras no coinciden en ambas frases.\n";
    }
    
    return 0;
}

