#include<stdio.h>
#include<math.h>

int main()
{
    float pi, raio, area, volume;
    
    printf("descubra a area da superficie e o volume de um cilindro");
    printf("\n\nInforme o raio:\n");
    scanf("%f", &raio);
    
    area = (4 * pi * pow(raio,2));
    volume = ((4.0/3) * pi * pow(raio,3));
    
    printf("Area = %0.4f\nVolume: %0.4f", area, volume);
}
