#include<stdio.h>/system("clear");

int main(){
	float n1, n2, n3, n4, n5, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	printf("Digite a nota 4: ");
	scanf("%f", &n4);
	printf("Digite a nota 5: ");
	scanf("%f", &n5);
	
	
	media = (n1 + n2 + n3 + n4 + n5) / 5;
	
	printf("A media do aluno e: %0.2f", media);
	
	
	return 0;	
}






