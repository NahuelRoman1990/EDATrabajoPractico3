#include <iostream>
#include <string.h>
#include<locale.h>
using namespace std;

/*Pevaco. Escribe un programa que pida tres cadenas al usuario, y muestre el resultado de concatenar las dos primeras 
letras de las cadenas introducidas, pero además que nos indique si las dos primeras cadenas son iguales.


Ejemplo: el usuario introduce como cadenas perro, vaca y cocodrilo. El programa mostrará por pantalla: “El resultado de 
concatenar las dos primeras letras de las cadenas es: “pevaco”. La primera cadena, perro, no es igual a la segunda cadena, 
vaca.” Use strcat
Si el usuario introdujera perro, perro, mulo, el programa debería mostrar: “El resultado de concatenar las dos primeras 
letras de las cadenas es pepemu. La primera cadena, perro, es igual a la segunda cadena, perro.”
*/



int main() {
	setlocale(LC_ALL,"Spanish");
	char cadena1[30],cadena2[30],cadena3[30],cadena_concat[30] = {0};

	cout<<"Ingrese la primer cadena"<<endl;
	cin.getline(cadena1,30,'\n');
	cout<<"Ingrese la segunda cadena"<<endl;
	cin.getline(cadena2,30,'\n');
	cout<<"Ingrese la tercer cadena"<<endl;
	cin.getline(cadena3,30,'\n');
	
	
	//longitud de las subcadenas
    char subcadena1[3];//3 porqu toma el salto de linea
    char subcadena2[3];
    char subcadena3[3];	
    
     // Copiamos la cadena a la subcad que dado su tamaño solo aceptara 2 letras
    strncpy(subcadena1, cadena1, 2);
    strncpy(subcadena2, cadena2, 2);
    strncpy(subcadena3, cadena3, 2);
    
    // agregamos el carácter nulo al final de cada subcadena sino pueden aparecer simbolos entra las sub cuando las contanamos ej pe@pe@gaÖ
	subcadena1[2] = '\0';
    subcadena2[2] = '\0';
    subcadena3[2] = '\0';

	
	//concatenamos todo a la cadena final
	strcat(cadena_concat,subcadena1);
	strcat(cadena_concat,subcadena2);
	strcat(cadena_concat,subcadena3);
	
	 

	cout << "El resultado de concatenar las dos primeras letras de las cadenas es: " << cadena_concat << endl;
	
	
	if(strcmp(cadena1,cadena2)== 0){
		cout<<"La primera cadena,"<<cadena1<<" es igual a la segunda cadena, "<<cadena2<<endl;
	}
	else{
		cout<<"Las cadenas no son iguales"<<endl;
	}
	
	return 0;
	
	
}


