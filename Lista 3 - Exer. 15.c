#include <stdio.h>

int main(){
    int numero;

    printf("Digite o DDD: ");
    scanf("%d", &numero); 

    switch (numero)
    {
        case 61: printf("Brasilia");break;
        case 71: printf("Salvador");break;
        case 11: printf("Sao Paulo");break;
        case 21: printf("Rio de Janeiro");break;
        case 32: printf("Juiz de Fora");break;
        case 19: printf("Campinas");break;
        case 27: printf("Vitoria");break;
        case 31: printf("Bela Horizonte");break;
        default: printf("DDD invalido");
    }

}
