#include<stdio.h>

int main (){
int horas, minutos, segundos;

printf ("Digite a quanidade de horas: ");
scanf("%d", &horas, &segundos);
minutos = horas * 60;
printf("Minutos:%d", minutos);
segundos = minutos * 60;
printf("Segundos:%d", segundos);




}