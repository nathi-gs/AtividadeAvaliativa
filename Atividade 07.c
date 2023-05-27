#include <stdio.h>
#include <math.h>

int main(){
	
	float valorCarro, valorDistribuidor, valorImpostos, valorFinal;
	
	printf("Digite o valor dos custos de fabrica do carro: ");
	scanf("%f", &valorCarro);
	
	valorDistribuidor = valorCarro * 0.28;
	valorImpostos = valorCarro * 0.45;
	valorFinal = valorDistribuidor + valorImpostos + valorCarro;
	
	
	printf("O valor final do carro ao consumidor sera: %0.2f", valorFinal);
	
	
}





