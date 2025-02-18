#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//outras bibliotecas

int main (){

    int opcao;
    int numerosecreto, palpite;

    printf ("Menu Principal. \n");
    printf("1. Iniciar jogo. \n");
    printf("2. Ver regras. \n");
    printf("3. Sair. \n");
    printf("Escolha uma opção: \n");
    scanf ("%d", &opcao);

    switch (opcao){
    case 1:
    srand (time (0));
    numerosecreto = rand () % 10;
    printf("Digite um número de 0 a 9: \n");
    scanf("%d", &palpite); 
    if (numerosecreto == palpite)
    {
        printf("Você acertou! \n");
        printf("Número secreto: %d\n", numerosecreto);
    } else {
        printf("Você errou! \n");
        printf("Número secreto: %d\n", numerosecreto);
    }
     break;
     case 2:
    printf("As regras são.... \n"); 
     break;
     case 3:
     printf("Saindo do jogo. \n"); 
      break;
 default:
 printf("Opção inválida. \n");
    break;
 }
}

    
