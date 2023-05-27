#include<stdio.h>
#include<math.h>

int main(){
    int valor1, raiz, quadrado;
    	
    printf("Digite um valor: ");
    scanf("%d", &valor1);
    
    quadrado = pow(valor1, 2);
    raiz = sqrt(valor1);
    
    if(valor1 > 0){
      printf("quadrado: %d\n", quadrado);
      printf("Raiz : %d", raiz);
      
    }else{
      printf("Numero invalido!");
    }
	
	return 0;
}
