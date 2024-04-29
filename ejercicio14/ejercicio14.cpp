#include <iostream>
#include <string.h>
#include<locale.h>


using namespace std;


/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
 nombre, país, numero_medallas.
  En el main pedir que digite el número de atletas, y a medida que los carga, devuelva los datos 
(Nombre, país) del atleta que ha ganado el mayor ‘número de medallas’.

*/

struct atleta{
			char nombre[50];
			char pais[50];
			int num_medallas;
			
				
		}atletas[1000];

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");
	
	int num_atletas,mayor=0,posicion_Mayor_medalla= 0;
	
	cout<< "Ingrese en número de atletas"<<endl;
	cin>>num_atletas;
	
	for(int i=0;i<num_atletas;i++){
		cout<<"Ingrese el nombre del atleta"<<endl;
		cin>>atletas[i].nombre;
		cout<<"Ingrese la nacionalidad"<<endl;
		cin>>atletas[i].pais;
		cout<<"Ingrese la cantidad de medallas ganadas"<<endl;
		cin>>atletas[i].num_medallas;
		
		
		if(atletas[i].num_medallas>0){
			mayor=atletas[i].num_medallas;//guardamos el atleta con el mayor num de medallas
		    posicion_Mayor_medalla = i; // guardamos la posición del atleta con el mayor num de medallas

		}
		cout<<"\n";
	}
	cout<<"Atleta con mas medallas ganadas: "<<endl; 
	cout<<"Nombre: "<<atletas[posicion_Mayor_medalla].nombre<<endl;
	 cout<<"Pais: "<<atletas[posicion_Mayor_medalla].pais<<endl; 
	
	
	
	
	
	
	
	
	
	return 0;
}
