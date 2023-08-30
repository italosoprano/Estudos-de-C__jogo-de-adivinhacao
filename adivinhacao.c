#include <stdio.h>
#include <stdlib.h>

int main(){
    //imprimir o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("Bem vindo ao jogo de adivinhação\n"); 
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    int numSecreto = 42;

    int chute;

    int ganhou = 0;

    int tentativas = 0;

    int pontos = 1000;

    while (ganhou == 0) {
        
        printf("Tentativa %d \n", tentativas + 1);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        if(chute < 0) {
            printf("O numero não pode ser menor do que 0\n");

            continue;
        }
        
        int acertou = (chute == numSecreto);
        int maior = (chute > numSecreto);

        if (acertou){
            printf("Parabéns, você acertou!!\n");
            
            ganhou = 1;
        } 

        else if (maior){
            printf("Seu chute é maior que o numero secreto.\n");
            printf("***************************************\n");
        } 

        else {
            printf("Seu chute é menor que o numero secreto.\n");                        printf("***************************************\n");
        }

        tentativas++;

        int pontosperdidos = abs(chute - numSecreto) / 2; 
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo, obrigado por jogar!!!\n");
    printf("Você acertou em %d tentativas\n", tentativas);
    printf("Sua pontuação é %d\n", pontos);
    printf("***************************************\n");
    
    return 0;
}

/*
printf("%d", numSecreto) --> "42", %d é uma mascara para o valor de variavel int.

*/
