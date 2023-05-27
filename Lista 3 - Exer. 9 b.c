#include<stdio.h>

int main(){
	float altura, peso;
	
	
	printf("Para saber sua classificacao preencha os dados.");
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	
	if(altura < 1.20 && peso <= 59){
		printf("A");
	}
	if(altura < 1.20 && peso >= 60 && peso <= 90){
		printf("D");
	}
	if(altura < 1.20 && peso >= 91){
		printf("G");
	}
	if(altura >= 1.20 && altura <= 1.70 && peso <= 59){
		printf("B");
	}
	if(altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso < 90){
		printf("E");
	}
	if(altura >= 1.20 && altura <= 1.70 && peso >= 91){
		printf("H");
	}
	if(altura > 1.70 && peso <= 59){
		printf("C");
	}
	if(altura > 1.70 && peso >= 60 && peso < 90 ){
		printf("F");
	}
	if(altura > 1.70 && peso >= 91){
		printf("I");
	}
	
	
	
	
	
	
}
