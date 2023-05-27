#include<stdio.h>

int main(){
	int x, y;
	
	printf("Digite o valor 1: ");
	scanf("%d", &x);
	printf("Digite o valor 2: ");
	scanf("%d", &y);
	
	if(x > y){
	  printf("\nO valor %d e maior que o valor %d", x, y);
    } 
	else if(x < y){
	  printf("\nO valor %d e maior que o valor %d", y, x);
	}
	    else if(x == y){
      printf("\nNumeros iguais");
	}

}
