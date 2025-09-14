//Jorge Casas


#include "ejercicios.h"

void calificaciones(){
	int i = 0, aprobados = 0, reprobados = 0, excelente = 0;
	float prom = 0;
	printf("Ingrese las calificaciones de sus estudiantes: \n");
	for (i; i < 8; i++){
		float calificacion;
		scanf("%f", &calificacion);
		if (calificacion >= 3.0){
			aprobados += 1;
			if (calificacion >= 4.5){
				excelente += 1;
			}
		}
		else{
			reprobados += 1;
		}
		prom += calificacion;
	}
	prom /= 8;
	printf("Aprobados: %d\n", aprobados);
	printf("Reprobados: %d\n", reprobados);
	printf("Estudiantes con calificacion excelente: %d\n", excelente);
	printf("Promedio del curso: %.3f\n", prom);
	printf("\n");
}

void encuestaSatisfaccion(){
	int edad, calificacion, encuestados = 0, jovenes = 0, perfecta = 0;
	float prom = 0;
	bool flag = true;
	while (flag){
		printf("Ingrese su edad: ");
		scanf("%d", &edad);
		printf("\n");
		if (edad != 0){
			printf("Ingrese su calificacion: ");
			scanf("%d", &calificacion);
			printf("\n");
			encuestados += 1;
			prom += calificacion;
			if (edad >= 18 && edad <= 25){
				jovenes += 1;
			}
			if (calificacion == 10){
				perfecta += 1;
			}
		}
		else{
			flag = false;
		}
	}
	prom /= encuestados;
	printf("Cantidad de encuestados: %d\n", encuestados);
	printf("Promedio de las calificaciones: %.3f\n", prom);
	printf("Cantidad de encuestados jovenes (entre 18 y 25): %d\n", jovenes);
	printf("Cantidad de calificaciones perfectas: %d\n", perfecta);
	printf("\n");
}

void ascendente(){
	int n, i = 0, numero, aux;
	bool flag = true, flag2 = true;
	printf("Ingrese la cantidad de numeros que se van a digitar: ");
	scanf("%d", &n);
	printf("\n");
	printf("Ingrese la secuencia de numeros: \n");
	while (i < n && flag2){
		scanf("%d", &numero);
		if (flag == true){
			aux = numero;
			flag = false;
		}
		else{
			if (numero < aux){
				flag2 = false;
			}
			else{
				aux = numero;
			}
		}
		i++;
	}
	if (flag2){
		printf("La secuencia de numeros es ascendente\n");
	}
	else{
		printf("La secuencia de numeros NO es ascendente\n");
	}
	printf("\n");
}

void descuento(){
	int cantidadU;
	float precioU, descuento;
	bool flag = true;
	printf("Ingrese el precio unitario del producto: ");
	scanf("%f", &precioU);
	printf("\n");
	printf("Ingrese la cantidad de unidades del producto: ");
	scanf("%d", &cantidadU);
	printf("\n");
	if (cantidadU > 10 && cantidadU < 21){
		descuento = precioU * 0.05;
		precioU -= descuento;
	}
	else if (cantidadU > 20 && cantidadU < 51){
		descuento = precioU * 0.1;
		precioU -= descuento;
	}
	else if (cantidadU > 50){
		descuento = precioU * 0.15;
		precioU -= descuento;
	}
	else if (cantidadU < 1){
		printf("Numero invalido\n");
		flag = false;
	}

	if (flag){
		printf("El precio al producto luego de aplicar el descuento es: %.2f\n", precioU);
	}
	printf("\n");
}

void repeticionPalabra(){
	std::string palabra;
    printf("Ingrese una palabra en minusculas: ");
    std::cin >> palabra;
    int frecuencia[26] = {0};

    for (char c : palabra){
        frecuencia[c - 'a'] += 1;
    }
    bool flag = false;
    for (char c : palabra){
        if (frecuencia[c - 'a'] == 1){
            printf("El primer caracter que no se repite es: %c\n", c);
            flag = true;
            break;
        }
    }
    if (!flag){
        printf("Todos los caracteres se repiten en la palabra\n");
    }
    printf("\n");
}

void fibonacci(){
	int n, aux1 = 0, aux2 = 1, aux3 = 0;
	printf("Escriba el maximo para la secuencia fibonacci: ");
	scanf("%d", &n);
	printf("\n");
	while (aux2 < n){
		aux3 = aux1 + aux2;
		aux1 = aux2;
		aux2 = aux3;
		printf("%d\n", aux3);
	}
	printf("\n");
}