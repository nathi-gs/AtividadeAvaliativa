#include <stdio.h>
#include<math.h>

int main(){
	
	float largura, altura, area, ml, l, latas;
	
	printf("Digite a largura da parede: ");
	scanf("%f", &largura);
	printf("Digite a altura da parede: ");
	scanf("%f", &altura);
	
	area = largura * altura;
	ml = area * 300;
	l = ml / 1000;
	latas = l / 2;

	
    printf("A quantidade de latas necessarias sera: %0.1f", latas);	
	
}





