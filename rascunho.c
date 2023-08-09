#include <stdio.h>

int main (){
    int x;
    int y;

    printf("Digite um numero na tela!!\n");
    scanf("%d", &x);

    printf("Digite outro numero, por favor!!\n");
    scanf("%d", &y);

    int m = x * y;

    printf("A multiplicação de %d com %d, é igual a %d!!\n", x, y, m);
}