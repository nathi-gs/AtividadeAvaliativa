#include<stdio.h>

int main(){
	int numero, resultado, resto;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	resto = numero / 2;
	resultado = resto / 2;
	
	if(resultado == 0){
	  printf("Numero par");

	}else if(resultado != 0){
	   printf("Numero impar");
		  }
	
	return 0;
	
}
