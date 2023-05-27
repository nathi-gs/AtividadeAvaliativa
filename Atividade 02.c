#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	
    float raio, area; 
	
	printf("Digite o valor do RAIO: ");
	scanf("%f", &raio);
	area= 3.14 * raio * raio;
	printf("area = %.2f", area);
	
    return 0;
}
