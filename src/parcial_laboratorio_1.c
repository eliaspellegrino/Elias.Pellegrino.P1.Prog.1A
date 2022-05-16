#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(float valor);
int reemplazarCaracteres(char cadena[], char a, char b);

int main(void) {
	setbuf(stdout, NULL);

	char cadena[20] = {"hola"};

	printf("%.2f", aplicarAumento(100));

	reemplazarCaracteres(cadena,'a', 'c');


	return EXIT_SUCCESS;
}

float aplicarAumento(float valor){
	float aumento = 0.05;
	float resultado;

	if (valor > 0){
		resultado = (valor * aumento) + valor;
	}


	return resultado;
}

int reemplazarCaracteres(char cadena[], char a, char b){

	int acumuladorReemplazos = 0;

	if (cadena != NULL){
		for(int i = 0; i < 20; i++){
				if (cadena[i] == a){
					cadena[i] = b;
					acumuladorReemplazos++;
				}

			}

		printf("%s", cadena);
	}


	return acumuladorReemplazos;
}




