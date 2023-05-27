#include <stdio.h>
#include <math.h>

int main (){
	
	float n1, n2, n3, Media;
	
	printf("Digite a n1: ");
	scanf("%f", &n1);
	printf("Digite a n2: ");
	scanf("%f", &n2);
	printf("Digite a n3: ");
	scanf("%f", &n3);
	
	Media = ((n1*2) + (n2*3) + (n3*5)) / (2 + 3 + 5);
	
	printf("A media final e: %0.1f", Media);
	
	return 0;
}
