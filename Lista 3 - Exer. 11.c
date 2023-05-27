#include<stdio.h>
#include<math.h>

int main (){ 
    float X, Y;

      printf ("De um valor para o eixo X: ");
      scanf ("%f",&X);
      printf ("De um valor para o eixo Y: ");
      scanf ("%f",&Y);

    if ( X == 0 && Y == 0)
      printf ("Eixo de partida");

    else if ( X < 0 && Y < 0)
      printf ("Quadrante 3");

     else if ( X < 0 && Y > 0 )
      printf ("Quadrante 2");

     else if ( X > 0 && Y > 0)
      printf ("Quadrante 1");

     else if ( X > 0 && Y < 0)
      printf ("Quadrante 4");

}
