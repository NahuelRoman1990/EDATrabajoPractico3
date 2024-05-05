/*
4. Escribe un programa que pida 2 nombres de países por teclado, nos dice cual tiene el nombre más largo(usar strlen), 
y permita elegir una opción: determinar si contiene “guay” (usar strstr), reemplazar el más corto en el más largo(usar strcpy), 
anexar el más largo al más corto(usar strcat). Luego muestra el resultado en pantalla.
Ejemplo: s1=Uruguay s2=Paraguay, tiene guay. Reemplaza s2=Uruguay por s2, y anexa y muestra s1=UruguayParaguay.
*/

#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Spanish");
	
	char pais1[20], pais2[20], paisLargo[20], paisCorto[20];
    
    cout << "Ingrese el primer pais: ";
    cin.getline(pais1, 20);

    cout << "Ingrese el segundo pais: ";
    cin.getline(pais2, 20);

    if (strlen(pais1) > strlen(pais2)) {
        cout << "El primer pais tiene el nombre mas largo: " << pais1 << endl;
        strcpy(paisLargo, pais1);
        strcpy(paisCorto, pais2);
    } else if(strlen(pais1) < strlen(pais2)){
        cout << "El segundo pais tiene el nombre mas largo: " << pais2 << endl;
        strcpy(paisLargo, pais2);
        strcpy(paisCorto, pais1);
    } else {
    	cout << "Los dos paises tienen la misma longitud de nombre." << endl;
    	strcpy(paisLargo, pais1);
        strcpy(paisCorto, pais2);
	}

    cout << "" << endl;

    int opcion;
    cout << "Elija una opción:\n" << endl;
    cout << "1. Determinar si los paises contienen 'guay'." << endl;
    cout << "2. Reemplazar el pais mas corto en el mas largo." << endl;
    cout << "3. Anexar el pais mas largo al más corto." << endl;
    cout << "" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            if (strstr(pais1, "guay")) {
                cout << "El pais 1 contiene 'guay' en su nombre." << endl;
            }
            if (strstr(pais2, "guay")) {
                cout << "El pais 2 contiene 'guay' en su nombre." << endl;
            }
            if (!strstr(pais1, "guay") && !strstr(pais2, "guay")) {
                cout << "Ningun pais contiene 'guay' en su nombre." << endl;
            }
            break;
        case 2:
            strcpy(paisLargo, paisCorto);
            strcpy(paisCorto, "");
            cout << "Se reemplazo el pais mas corto en el mas largo." << endl;
            cout << "Pais largo: " << paisLargo << endl;
            cout << "Pais corto: " << paisCorto << endl;
            break;
        case 3:
            strcat(paisCorto, paisLargo);
            cout << "Se anexo el pais largo al corto." << endl;
            cout << "Pais corto: " << paisCorto << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
