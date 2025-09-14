//Jorge Casas


#include <stdio.h>
#include "ejercicios.h"

int main(){
	int i = -1;
	while (i != 0){
		printf("Bienvenido al selector de ejercicios de logica\n");
		printf("-------------------------------------------------------------\n");
		printf("\n");
		printf("1. Calificaciones\n");
		printf("2. Encuesta de satisfaccion\n");
		printf("3. Es ascendente?\n");
		printf("4. Descuento de producto\n");
		printf("5. Repeticion en palabra\n");
		printf("6. Fibonacci\n");
		printf("Ingrese el numero del ejercicio al que quiere acceder: \n");
		scanf("%d", &i);
		if (i == 1){
			calificaciones();
		}
		else if (i == 2){
			encuestaSatisfaccion();
		}
		else if (i == 3){
			ascendente();
		}
		else if (i == 4){
			descuento();
		}
		else if (i == 5){
			repeticionPalabra();
		}
		else if (i == 6){
			fibonacci();
		}
		else if (i == 0){
			printf("Final de programa\n");
		}
		else{
			printf("Ingrese un numero valido\n");
		}
	}


	return 0;
}