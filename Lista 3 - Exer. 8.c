#include<stdio.h>

int main(void){
	float produto, imposto, MG, SP, RJ, MS;
	int estado;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &produto);
	printf("Digite o estado de destino do produto.\n(1) MG - (2) SP - (3) RJ - (4) MS:\n");
	scanf("%d", &estado);
	

	switch (estado)
{
    case 1 : 
    {
        imposto = produto * 0.7;
        break;
    }

    case 2 :
    {
        imposto = produto * 0.12;
        break;
    }

    case 3 :
    {
        imposto = produto * 0.15;
        break;
    }
    case 4 : 
    {
        imposto = produto * 0.8;
         break;
    }
    default:
    {
        printf("ESTADO INVALIDO");
        break;
    }

}

printf("Preco final do produto: %2.2f", produto + imposto);

}
