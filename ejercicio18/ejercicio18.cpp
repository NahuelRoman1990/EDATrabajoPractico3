#include <iostream>
#include <string.h>
#include<locale.h>

using namespace std;
/*Defina una estructura que permita cargar el d�a y las temperaturas m�xima y m�nima de ese d�a.
 Luego defina un arreglo en el que cargara todos estos datos para un mes. 
 Realice un programa que cargue la estructura antes definida y calcule 
el promedio de temperaturas m�ximas y el promedio de temperaturas m�nimas del mes.*/


struct Mes{
			int dia;
			double maxima;
			double minima;		
		}mes[30];

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");
	
	int promedio_maxima=0,promedio_minima=0;
	
	//cargamos los datos de un mes
   for (int i = 0; i < 30; i++) {
		cout<<"Ingrese el dia"<<endl;
		cin>>mes[i].dia;
		cout<<"Ingrese la temperatura m�xima"<<endl;
		cin>>mes[i].maxima;
		cout<<"Ingrese la temperatura minima"<<endl;
		cin>>mes[i].minima;
	}
	
	
	//sumamos las temperaturas m�ximas y m�nimas
	for(int i=0;i<30;i++){
	promedio_maxima+=mes[i].maxima;
	promedio_minima+=mes[i].minima;
	}
	//mostramos
	cout<<" Promedio de temperaturas m�ximas del mes "<<promedio_maxima/30<<endl;
	cout<<" Promedio de temperaturas minimas mes "<<	promedio_minima/30<<endl;

	
	return 0;
}
