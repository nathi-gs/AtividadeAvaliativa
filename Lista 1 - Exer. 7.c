#include <stdio.h>
#include <stdlib.h>


int main(){ 

int sexo, matricula, htrabalhadas, valorhora, salario;
char nome[100];

printf("Digite o nome do funcionario: ");
scanf("%s", &nome);
printf("\nQual o sexo? (digite 1-feminino ou 2-masculino):  ");
scanf("%d", &sexo);
printf("\nDigite o numero da matricula: ");
scanf("%d", &matricula);
printf("\nDigite o numero de horas trabalhadas: ");
scanf("%d", &htrabalhadas);
printf("\nDigite o valor recebido por hora: ");
scanf("%d", &valorhora);


salario = htrabalhadas * valorhora;

printf("\nO salario desse funcionario: R$%d", salario );

return 0;
}


