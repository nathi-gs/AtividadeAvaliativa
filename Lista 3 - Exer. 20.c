#include <stdio.h>
#include <stdlib.h>


int main(){
    float a, b, c, delta, raizDelta, x1, x2;

    printf("Digite os coeficientes de uma equacao: ");  
    scanf("%f%f%f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    raizDelta = sqrt(delta);

   if(delta < 0)
      printf("Nao exite raiz");
            else if(delta == 0)
{
     x1 = -b / 2 * a;
     printf("Exite apenas 1 raiz que eh : %f", x1);

}if (delta > 0)       
{
	
x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);

printf("Exitem 2 raizes que sao x1 = %f , x2 = %f", x1, x2);
}

return (0);

}

