#include<stdio.h>

int main(){
	float salario, prestacao, porcentagem;
	
	printf("Digite o salario do trabalhador: ");
	scanf("%f", &salario);
	printf("Digite o valor da prestacao: ");
	scanf("%f", &prestacao);
	
	porcentagem = salario * 0.20;
	
	if(prestacao <= porcentagem){
		printf("Emprestimo concedido");
	
	}else{
		printf("Emprestimo nao concedido");
	}
	
	return 0;
}
