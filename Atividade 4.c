#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite a idade do eleitor: ");
	scanf("%d", &idade);
	
	if(idade==0)
	 printf("Nao nasceu");
	 
	if(idade<15)
	 printf("Nao vota");
	 
	if(16>idade<17)
	 printf("Opcional");
	 
	if(18<idade>65)
	 printf("Obrigatorio");
	
	return 0;
	
}
