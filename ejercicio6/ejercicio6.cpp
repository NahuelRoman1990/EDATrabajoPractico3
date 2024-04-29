#include <iostream>
#include <string.h>
#include<locale.h>
#include <cstring>// Para usar strlen
using namespace std;
/*Declare una estructura llamada struct DiscoCompacto, que guarde el título, Artista, numero de canciones, precio, año de 
lanzamiento. Use typedef para declarar el alias del struct como CD. 
- Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
- Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10 letras. –
- Luego compare si dos títulos son del mismo artista.*/



	struct DiscoCompacto{
			char titulo[100];
			char artista[30];
			int num_canciones;
			float precio;
			int anio_lanzamiento;
		};
		
		typedef struct DiscoCompacto CD;
		CD global_1;
		CD global_2;

int main(int argc, char** argv) {
		setlocale(LC_ALL,"Spanish");
		
		CD local;
		
		 // Inicializo variables
    strcpy(global_1.titulo, "19 días y 500 noches");
    strcpy(global_1.artista, "Joaquin Sabina");
    global_1.num_canciones = 13;
    global_1.precio = 25000.00;
    global_1.anio_lanzamiento= 1999;
    
    
    strcpy(global_2.titulo, "Fin de fiesta");
    strcpy(global_2.artista, "Joaquin Sabina");
    global_2.num_canciones = 12;
    global_2.precio = 21000.00;
    global_2.anio_lanzamiento = 2013;
    
    
    strcpy(local.titulo, "Eco");
    strcpy(local.artista, "Jorge");//drexler
    local.num_canciones = 13;
    local.precio = 23000.00;
    local.anio_lanzamiento= 2004;
    	
/*	Iterar usando strlen para mostrar el nombre de cada artista,
	 solo si la longitud del artista, si es mayor a 10 letras. –*/
		cout << "Artistas con nombres de más de 10 letras:" << endl;
	
			if(strlen(global_1.artista)>10){
				cout<<"Artista: "<<global_1.artista<<endl;
				
		}
	
		if(strlen(global_2.artista)>10){
				cout<<"Artista: "<<global_2.artista<<endl;
				
		}
			if(strlen(local.artista)>10){
				cout<<"Artista: "<<local.artista<<endl;
				
		}	
		
		//comparo si dos títulos son del mismo artista
		if(strcmp(global_1.artista,global_2.artista)==0){
			
		 cout << "Los CDs  1 y 2 son del mismo artista." << endl;
    } else {
       cout << "Los CDs  1 y 2 son de artistas diferentes." << endl;
    }
		
	return 0;
}
