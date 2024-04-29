#include <iostream>
#include <string.h>
#include<locale.h>
#include <cstring>

 using namespace std;

/*Hacer un programa en C++ para 
A) Registrar los datos de tres libros como: título, autor, año y color del libro.
 El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul.
  B) Mostrar 3 Libros según sea su color*/
  
  	enum Color{  rojo, verde , azul};
  
  struct libros{
			char titulo[100];
			char autor[40];
			int anio_lanzamiento;
			Color color;
				
		};
  
  
  
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");
	
	libros libro[3];
	
		 // Inicializo variables
    strcpy(libro[0].titulo,"Libro 1");
    strcpy(libro[0].autor, "Joaquin");
    libro[0].anio_lanzamiento =2024;
    libro[0].color=rojo;
    
		
	 strcpy(libro[1].titulo,"Libro 2");
    strcpy(libro[1].autor, "Joa");
    libro[1].anio_lanzamiento =2020;
    libro[1].color=verde;
	
	strcpy(libro[2].titulo,"Libro 3");
    strcpy(libro[2].autor, "Joaqui");
    libro[2].anio_lanzamiento =2022;
    libro[2].color=azul;
    
    
    //muestro los libros
    for(int i=0;i<3;i++){
        cout << "Titulo: " << libro[i].titulo << endl;
        cout << "Autor: " << libro[i].autor << endl;
        cout << "Año de lanzamiento: " << libro[i].anio_lanzamiento << endl;
        
        //uso switch para que se muestre el color correspondiente
    	switch(libro[i].color){
    		case rojo:
    			cout<<"Color Rojo"<<endl;
    			break;
    			case azul:
    			cout<<"Color Azul"<<endl;
    			break;
    			case verde:
    			cout<<"Color verde"<<endl;
    		   break;
		}
		
		cout<<"----------------------------------------"<<endl;
	}
	
	
	
	return 0;
}
