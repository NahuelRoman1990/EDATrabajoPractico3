#include <iostream>
#include <string>

using namespace std;

struct Jubilado {
    int nroCarnet;
    std::string nombre;
    std::string apellido;
    int dni;
    int edad;
    int aportes;
    double montoPension;
};

void cargarJubilados(Jubilado jubilados[], int N) {
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese los datos del jubilado " << i+1 << std::endl;
        cout << "Número de carnet: ";
        cin >> jubilados[i].nroCarnet;
        cout << "Nombre: ";
        cin >> jubilados[i].nombre;
        cout << "Apellido: ";
        cin >> jubilados[i].apellido;
        cout << "DNI: ";
        cin >> jubilados[i].dni;
        cout << "Edad: ";
        cin >> jubilados[i].edad;
        cout << "Aportes: ";
        cin >> jubilados[i].aportes;
        cout << "Monto de pensión: ";
        cin >> jubilados[i].montoPension;
    }
}

void imprimirMayorMenorPension(Jubilado jubilados[], int N) {
    double mayorPension = jubilados[0].montoPension;
    double menorPension = jubilados[0].montoPension;
    int posMayor = 0, posMenor = 0;

    for (int i = 1; i < N; ++i) {
        if (jubilados[i].montoPension > mayorPension) {
            mayorPension = jubilados[i].montoPension;
            posMayor = i;
        }
        if (jubilados[i].montoPension < menorPension) {
            menorPension = jubilados[i].montoPension;
            posMenor = i;
        }
    }

    cout << "Datos del jubilado con mayor pensión:\n";
    cout << "Nombre: " << jubilados[posMayor].nombre << " " << jubilados[posMayor].apellido << std::endl;
    cout << "Número de carnet: " << jubilados[posMayor].nroCarnet << std::endl;
    cout << "Monto de pensión: $" << jubilados[posMayor].montoPension << std::endl;

    cout << "\nDatos del jubilado con menor pensión:\n";
    cout << "Nombre: " << jubilados[posMenor].nombre << " " << jubilados[posMenor].apellido << std::endl;
    cout << "Número de carnet: " << jubilados[posMenor].nroCarnet << std::endl;
    cout << "Monto de pensión: $" << jubilados[posMenor].montoPension << std::endl;
}

void jubiladosConAportes(Jubilado jubilados[], int N, int aportesMin, int aportesMax) {
    cout << "\nJubilados con entre " << aportesMin << " y " << aportesMax << " años de aporte:\n";
    for (int i = 0; i < N; ++i) {
        if (jubilados[i].aportes >= aportesMin && jubilados[i].aportes <= aportesMax) {
            cout << "Nombre: " << jubilados[i].nombre << " " << jubilados[i].apellido << endl;
            cout << "Número de carnet: " << jubilados[i].nroCarnet << endl;
        }
    }
}

void jubiladosConPensionInferior(Jubilado jubilados[], int N, double montoMax) {
    cout << "\nNúmero de carnet de jubilados con pensión inferior a $" << montoMax << ":\n";
    for (int i = 0; i < N; ++i) {
        if (jubilados[i].montoPension < montoMax) {
            cout << jubilados[i].nroCarnet << endl;
        }
    }
}

int main() {
    int N;
    cout << "Ingrese la cantidad de jubilados: ";
    cin >> N;

    Jubilado jubilados[N];

    cargarJubilados(jubilados, N);

    imprimirMayorMenorPension(jubilados, N);

    jubiladosConAportes(jubilados, N, 20, 30);

    jubiladosConPensionInferior(jubilados, N, 90000);

    return 0;
}

