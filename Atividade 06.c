#include <stdio.h>
#include <math.h>

int main(){
	
	float salarioAtual, reajuste, salarioNovo, valorReajuste;
	
	printf("Digite o salario atual: ");
	scanf("%f", &salarioAtual);
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &reajuste);
	
	valorReajuste = (salarioAtual * reajuste / 100);
	salarioNovo = valorReajuste + salarioAtual;
	
	
	printf("O novo salario e: %0.2f", salarioNovo);
	
	
	
}
