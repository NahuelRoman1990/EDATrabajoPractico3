#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int largo = 50;
    char frase1[largo], frase2[largo];

    cout << "Ingresa la primera frase: ";
    cin.getline(frase1, largo);

    cout << "Ingresa la segunda frase: ";
    cin.getline(frase2, largo);

    int resultado = strncasecmp(frase1, frase2, 5);
    if (resultado == 0) {
        cout << "Las frases coinciden hasta la quinta letra." << endl;

        if (strstr(frase1, "la") && strstr(frase2, "la")) {
            cout << "Ambas frases contienen la subcadena \"la\"." << endl;
        } else if (strstr(frase1, "la")) {
            cout << "Solo la primera frase contiene la subcadena \"la\"." << endl;
        } else if (strstr(frase2, "la")) {
            cout << "Solo la segunda frase contiene la subcadena \"la\"." << endl;
        } else {
            cout << "Ninguna de las frases contiene la subcadena \"la\"." << endl;
        }
    } else {
        cout << "Las frases no coinciden hasta la quinta letra." << endl;
    }

    return 0;
}


