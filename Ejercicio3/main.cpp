#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Escribe un programa que pida al conductor la patente del vehículo consistente en 2 letras al inicio, 3 números, y 2 letras
//más al final. Al ingresarla, se debe cargar anexando un guion (separada por guiones). Ejemplo: AE-529-QZ. Usa strtok,
//para separar los 3 grupos, y mostrarlos individualmente. Validar la longitud de los grupos. Use strlen y strcat.



int main(int argc, char** argv) {
	setlocale(LC_ALL,"Spanish");
	
	char patente[9];
	
	printf("ingrese la patente de su vehículo de la siguiente forma: 2 letras al inicio - 3 números - y 2 letras. Ejemplo: AE-529-QZ\n");
	scanf("%s",patente);
	
	if (strlen(patente) != 9){
		printf("La patente ingresada no tiene el formato correcto.\n");
		return 1;
	}
	
	// Separamos la patente en grupos usando el strtok
	
	char *primeras2letras;
	char *tresNumeros;
	char *ultimas2letras;
	
	primeras2letras = strtok(patente, "-");
	tresNumeros = strtok(NULL, "-"); // NULL es para que siga cortando desde el ultimo lugar que se quedo
	ultimas2letras = strtok(NULL, "-");
	
	printf("Grupo 1: %s\n", primeras2letras);
    printf("Grupo 2: %s\n", tresNumeros);
    printf("Grupo 3: %s\n", ultimas2letras);
	
	return 0;
}
