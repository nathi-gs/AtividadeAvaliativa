#include <stdio.h>

int main (void){
	int inteiro; 
	float valor1; 
	double valor2; 
	char letra; 
	char string[10];
	int valor=2;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &inteiro);
	printf("Digite o valor1: ");
	scanf("%f", &valor1);
	printf("Digite o valor2: ");
	scanf("%lf", &valor2);
	printf("Digite uma letra: ");
	scanf("%s", &letra);
	printf("Digite um string: ");
	scanf("%s", &string);

		printf("Digite o numero dois: ");
		scanf("%d", &valor);
		
	return 0;
}
