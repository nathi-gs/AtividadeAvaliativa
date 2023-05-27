#include <stdio.h>
#include <math.h>>

int main(){

   int anoAtual, anoNascimento, idade, anos, meses, dias;
   
   
   printf("Digite o ano atual: ");
   scanf("%d", &anoAtual);
   printf("Digite seu ano de nascimento: ");
   scanf("%d", &anoNascimento);
   
   idade = anoAtual - anoNascimento;
   meses = idade * 12;
   dias = idade * 365;
   
   
   printf("Idade em dias: %d", dias);
   
   




}
