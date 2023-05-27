#include<stdio.h>

int main(){
	int A, B, C, numero, resultado;
	
	printf("Digite tres valores inteiros: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("Escolha a forma de calculo:\n(1) Geometrica - (2) Ponderada - (3) Harmonica - (4) Aritmetica\n ");
	scanf("%d", &numero);
	
	if(numero == 1){
	    resultado = A * B * C;
	    printf("Resultado da media geometrica: %d", resultado);
	}
	if(numero == 2){
		resultado = A + 2 * B + 3 * C / 6;
		printf("Resultado da media ponderada: %d", resultado);
	}
	if(numero == 3){
		resultado = 1 / (1 / A + 1 / B + 1 / C);
		printf("Resultado da media harmonica: %d", resultado);
	}
	if(numero == 4){
		resultado = A + B + C / 3;
		printf("Resultado da media aritmetica: %d", resultado);
	}
}
