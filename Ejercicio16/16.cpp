/*
16. Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. 
Debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas 
calcule el tiempo total empleado por el Ciclista en completar todas y cada una de las etapas. 
Mostrar para 3 de ellos, nombre completo, medallas, y tiempos en las etapas.
*/

#include <iostream>

using namespace std;

struct Etapa {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    int n;
    char nombre[20];
    int medallas;
    
    
    cout << "Ingrese el nombre completo del ciclista: ";
    cin.getline(nombre, 20);
    
    cout << "Ingrese la cantidad de medallas: ";
    cin >> medallas;
    
    cout << "Ingrese el numero de etapas: ";
    cin >> n;

    Etapa etapas[n]={};
    
    Etapa tiempoTotal = {};
    
    for (int i = 0; i < n; i++) {
       
        cout << "Ingrese el tiempo para la etapa " << i + 1 << " (horas minutos segundos): " << endl;
        cin >> etapas[i].horas >> etapas[i].minutos >> etapas[i].segundos;

        tiempoTotal.segundos += etapas[i].segundos;
        tiempoTotal.minutos += etapas[i].minutos;
        tiempoTotal.horas += etapas[i].horas;

        if (tiempoTotal.segundos >= 60) {
            tiempoTotal.minutos += tiempoTotal.segundos / 60;
            tiempoTotal.segundos %= 60;
        }
        if (tiempoTotal.minutos >= 60) {
            tiempoTotal.horas += tiempoTotal.minutos / 60;
            tiempoTotal.minutos %= 60;
        }
    }

    
    cout << "El nombre completo del ciclista es :" << nombre <<endl;
    cout << "La cantidad de medallas es de " << medallas << endl;
    
    for (int i = 0; i < n; i++) {
    	
    	cout << "El tiempo total empleado en la etapa " << i + 1 << " es: ";
    	cout << etapas[i].horas << " horas, ";
    	cout << etapas[i].minutos << " minutos, ";
    	cout << etapas[i].segundos << " segundos." << endl;
    	
    }
    
    cout << endl;
    
    cout << "El tiempo total empleado en todas las etapas es: ";
    cout << tiempoTotal.horas << " horas, ";
    cout << tiempoTotal.minutos << " minutos, ";
    cout << tiempoTotal.segundos << " segundos." << endl;

    return 0;
}
