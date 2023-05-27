#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	
    float base, altura, area; 
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do retangulo: ");
	scanf("%f", &altura);
	
	area= base * altura;
	
	printf("area = %0.0f", area);
	
    return 0;
}
