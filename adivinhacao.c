#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //imprimir o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("Bem vindo ao jogo de adivinhação\n"); 
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numSecreto = 1;
    int chute;
    int tentativas = 0;
    int pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Escolha o nível de dificuldade.\n");
    printf("(1) Fácil, (2) Médio, (3) Difícil.\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    if(nivel == 1) {
        numerodetentativas = 20;
    } else if (nivel == 2) {
        numerodetentativas = 15;
    } else {
        numerodetentativas = 6;
    }

    for (int i = 1 ; i <= numerodetentativas ; i++) {
        
        printf("Tentativa %d de %d \n", tentativas + 1, numerodetentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        if(chute < 0) {
            printf("O numero não pode ser menor do que 0\n");

            continue;
        }
        
        acertou = (chute == numSecreto);
        int maior = (chute > numSecreto);

        if (acertou){
            break;
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

    printf("***************************************\n");
    printf("Fim de jogo, obrigado por jogar!!!\n");
    printf("***************************************\n");

    if(acertou) {
        printf("Parabéns, você acertou!!\n");
        printf("Você acertou em %d tentativas\n", tentativas + 1);
        printf("Sua pontuação é %d\n", pontos);
        printf("***************************************\n");
    } else {
        printf("você perdeu, tente de novo!\n");
    }

    
    
    return 0;
}

/*
printf("%d", numSecreto) --> "42", %d é uma mascara para o valor de variavel int.

*/
