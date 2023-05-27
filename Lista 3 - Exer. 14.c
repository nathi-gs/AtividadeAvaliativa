#include <stdio.h>

int main(){
    int numero;

    printf("Digite o numero correspondente ao dia da semana: ");
    scanf("%d", &numero); 

    switch (numero)
    {
        case 1: printf("Segunda");break;
        case 2: printf("Terça");break;
        case 3: printf("Quarta");break;
        case 4: printf("Quinta");break;
        case 5: printf("Sexta");break;
        case 6: printf("Sabado");break;
        case 7: printf("Domingo");break;
        default: printf("Numero invalido");
    }

}
