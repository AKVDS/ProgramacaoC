#include <stdio.h>
int main (){

    int matriz [3][3];

   //inicialização da matriz com base em condição simples
    for (int a = 0; a < 3; a++){   //loop externo - linhas
        for (int b = 0; b < 3; b++){   //loop interno - colunas
            if (b % 2 == 0){
                matriz [a][b] = 1; //se a coluna for par, atribui 1
            } else {
                matriz [a][b] = 0; // se a coluna for impar, atribui 0
            }
        }
    } 
    
    //impressão da matriz
    for (int a = 0; a < 3; a++){   //loop imprimir - linha
        for (int b = 0; b < 3; b++){  //loop imprimir - colunas
            printf("%d ", matriz[a][b]);
        } 
        printf("\n"); //organizar tudo/separar
    } 
   
    return 0;
}