#include<stdio.h>
#include<math.h>

int main(){
	float h, pesoM, pesoH, sexo;
	
	printf("Digite a sua altura: ");
	scanf("%f", &h);
	printf("Se voce for mulher digite 1, se voce for homem digite 2. ");
	scanf("%f", &sexo);
	
	pesoM = (62.1 * h) - 44,7;
	pesoH = (72.7 * h) - 58;

	
	if(sexo == 1){
	   printf("O peso dela e %2.2f", pesoM);
	   
	}else if(sexo == 2){
       printf("O peso dele e %2.2f", pesoH);
       
	}else {
		printf("Digite 1 se voce for mulher ou 2 se for homem");
	}

}


