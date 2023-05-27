#include<stdio.h>
#include<math.h>

int main()
{
    float x1, x2, y1, y2, x;

printf("Descubra a distancia entre dois pontos");
printf("\n\nDigite os valores do primeiro ponto (x1,y1):\n ");
scanf("%f%f", &x1, &y1);
printf("Digite os valores do segundo ponto (x2,y2):\n ");
scanf("%f%f", &x2, &y2);

x = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

printf("A distancia entre os pontos e: %0.4f", x);
}
