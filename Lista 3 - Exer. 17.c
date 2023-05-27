#include<stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 3 || valor % 5) {
        printf("%d e divisivel", valor);
        return 0;
    }
    else {
        printf("Nao e divisivel");
        return 0;
    }
}
