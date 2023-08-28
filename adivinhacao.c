#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){
    //imprimir o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("Bem vindo ao jogo de adivinhação\n"); 
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    int numSecreto = 42;

    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("Qual é o seu chute? \n");
        printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        int acertou = (chute == numSecreto);

        if (acertou){
            printf("Parabéns, você acertou!!\n");
            break;
        } else {
            int maior = chute > numSecreto;
            if (maior){
                printf("Seu chute é maior que o numero secreto.\n");
            } else {
                printf("Seu chute é menor que o numero secreto.\n");
            }
        } 
    }

    printf("Fim de jogo, obrigado por jogar!!!\n");
    
    return 0;
}

/*
printf("%d", numSecreto) --> "42", %d é uma mascara para o valor de variavel int.

*/