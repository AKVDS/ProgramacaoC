#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar número aleatório
    srand(time (0));
    numeroComputador = rand () % 100 + 1; //número entre 1 e 100

    //início do jogo

    printf ("Bem Vindo ao jogo maior, menor ou igual. \n");
    printf ("Você deve escolher um número e o tipo de comparação. \n");
    printf("M. Maior. \n");
    printf("N. Menor. \n");
    printf("I. Igual. \n");

    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número de 1 a 100: \n");
    scanf("%d", &numeroJogador);

    //Exibir número do computador

    printf("O número do computador é: %d\n", numeroComputador);
    
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
       printf("Você escolheu opção maior. \n");
    resultado = numeroJogador > numeroComputador ? 1: 0; // 1 (verdadeiro) e 0 (falso)
        break;
        case 'N':
        case 'n':
        printf("Você escolheu opção menor. \n");
        resultado = numeroJogador < numeroComputador ? 1: 0;
        break;
        case 'I':
        case 'i':
        printf("Você escolheu opção igual. \n");
      resultado = numeroJogador == numeroComputador ? 1: 0;
        break;
    default:
    printf("Opcão inválida!\n");
        break;
    }
    
    printf("O número do computador é: %d número do jogador é: %d\n", numeroComputador, numeroJogador);
    
    if (resultado == 1 ){
        printf("VENCEU! \n");
    } else {
        printf("PERDEU! \n");
    }
}