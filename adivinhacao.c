#include <stdio.h>

int main(){
    //imprimir o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("Bem vindo ao jogo de adivinhação\n"); 
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    int numSecreto = 42;

    int chute;

    printf("Qual é o seu chute? \n");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    if (chute == numSecreto){
        printf("Parabéns, você acertou!!\n");
    } else if (chute > numSecreto){
        printf("Seu chute é maior que o numero secreto.\n");
    } else if (chute < numSecreto){
        printf("Seu chute é menor que o numero secreto.\n");
    }
    
    return 0;
}

/*
printf("%d", numSecreto) --> "42", %d é uma mascara para o valor de variavel int.

*/