#include <stdio.h>
#include <math.h>


int main (){
	
	float salarioFixo, comissao, valorVenda, carrosVendidos, salarioFinal, valor1, valor2;
	
	printf("Quantos carros o funcionario vendeu: ");
	scanf("%f", &carrosVendidos);
	printf("Qual o Valor total de suas vendas: ");
	scanf("%f", &valorVenda);
	printf("Qual o salario fixo do funcionario: ");
	scanf("%f", &salarioFixo);
	printf("Qual o valor recebido por carro vendido: ");
	scanf("%f", &comissao);
	
	valor1 = carrosVendidos * comissao;
	valor2 = valorVenda * 0.05; 
	
	salarioFinal = valor1 + valor2 + salarioFixo;
	
	printf("O salario final do funcionario sera: %0.2f", salarioFinal);
	
}
