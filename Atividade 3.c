#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	system("cls");	
	
	
	if(idade>70)
	 printf("Novos 50");
	if(idade>21)
	 printf("Adulto");
	if(idade<21)
	 printf("Jovem");
	
	return 0;
	
}





