#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));  // Gerar semente para o número aleatório

    printf("JOGO DO JOKENPÔ\n");
    printf("Escolha uma opção: \n");
    printf("1. pedra.\n");
    printf("2. papel.\n");
    printf("3. tesoura.\n");
    printf("FAÇA SUA ESCOLHA: \n");
    scanf("%d", &escolhaJogador);

    // Gerar a escolha do computador aleatoriamente
    escolhaComputador = rand() % 3 + 1;

    // Mostrar a escolha do jogador
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: pedra - ");
            break;
        case 2:
            printf("Jogador: papel - ");
            break;
        case 3:
            printf("Jogador: tesoura - ");
            break;
        default:
            printf("Opção inválida! \n");
            return 0;  // Encerra o programa se a escolha for inválida
    }

    // Mostrar a escolha do computador
    switch (escolhaComputador) {
        case 1:
            printf("COMPUTADOR: pedra. \n");
            break;
        case 2:
            printf("COMPUTADOR: papel. \n");
            break;
        case 3:
            printf("COMPUTADOR: tesoura. \n");
            break;
    }

    // Verificar o resultado do jogo
    if (escolhaJogador == escolhaComputador) {
        printf("Empate. \n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
               (escolhaJogador == 2 && escolhaComputador == 1) || 
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você ganhou! \n");
    } else {
        printf("Você perdeu! \n");
    }

    return 0;  // Finaliza o programa
}


    
    
        
    
 


