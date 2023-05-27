#include<stdio.h>

int main (){
    int operacao, valor1, valor2, calculo;
        
        printf("Informe qual operacao sera realizada:\n(1) Soma - (2) Subtracao - (3) Divisao - (4) Multiplicacao\n");
        scanf("%d",&operacao);
        
        printf("Digite o valor 1 : ");
        scanf("%d",&valor1);
        printf("Digite o valor 2 : ");
        scanf("%d",&valor2);

        switch (operacao)
        {
        case 1:
            calculo = valor1 + valor2;
            printf("O resultado da soma e %d", calculo);break;
        case 2:
            calculo = valor1 - valor2;
            printf("O resultado da subtracao e %d", calculo);break;
        case 3:
            calculo = valor1 / valor2;
            printf("O resultado da divisao e %d", calculo);break;
        case 4:
            calculo = valor1 * valor2;
            printf("O resultado da multiplicacao e %d", calculo);break;        
        default:
        printf("Operacao invalida");break;
        }
    }
