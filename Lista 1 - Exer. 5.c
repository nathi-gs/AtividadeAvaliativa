#include <stdio.h>

int main(){
    int rolos, fios, metros;
    
    printf("Digite a quantidade necessaria de rolos: ");
    scanf("%f", &metros);
    
 if(metros > 0){
   rolos = metros / 50;
   fios = metros % 50;
   printf("serao utilizados %f rolos e %f fios avulsos", rolos, fios );
}else
{
   printf("quantidade invalida");
}

return 0;
}
