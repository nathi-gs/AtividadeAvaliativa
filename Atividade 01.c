#include <stdio.h>
#include <math.h>

int main(){
	
	float valorProduto, frete, demaisDespesas, valorVenda, lucro;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	printf("Digite o valor do frete: ");
	scanf("%f", &frete);
	printf("Adicione as demais despesas: ");
	scanf("%f", &demaisDespesas);
	printf("Qual o valor da venda: ");
	scanf("%f", &valorVenda);
	
	lucro = valorVenda - (valorProduto + frete + demaisDespesas);
	
	printf("O lucro sera de %0.2f", lucro);
	
}





