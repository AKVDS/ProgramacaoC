#include <stdio.h>
int main (){

    int opcao;
    float media;
    float nota1, nota2, nota3;

    printf("Menu de gerencimanto de estudantes. \n");
    printf ("1. cálcular média. \n");
    printf ("2. Determinar Status. \n");
    printf ("3. Sair. \n");
    printf ("Escolha uma opção. \n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf ("1. cálcular média. \n");
    printf("Digite a primeira nota: \n");
    scanf ("%f", &nota1);
    printf ("Digite segunda nota: \n");
    scanf ("%f", &nota2);
    printf("Digite terceira nota: \n");
    scanf("%f", &nota3);

    
    //TESTAR SE A NOTA >= 0 OU SE É <= 10
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)){
        media = (nota1 + nota2 + nota3) / 3;
        printf("A média é: %.2f\n", media);
    } else {
        printf("Entrada com valores errados de nota. \n");
        break;
    } 
    case 2:
    printf ("2. Determinar Status. \n");
        break;
    case 3:
    printf ("3. Sair. \n");
         break;
      default:  
      printf ("opção inválida. \n");  
         break;
    }
}