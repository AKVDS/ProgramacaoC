#include <stdio.h>
int main (){

    int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //substituição condicional de elementos

    for (int a = 0; a < 3; a++){  // loop externo - linhas
        for (int b = 0; b < 3; b++){ // loop interno - colunas
            if (matriz [a][b] % 3 == 0){
                matriz [a][b] = -1;  // substituição de múltiplos de 3 por -1
            }
        }
    }
    
    // impressão da matriz modificada
    
    for (int a = 0; a < 3; a++){  // loop externo - linhas
        for (int b = 0; b< 3; b++){  // loop interno - colunas
            printf ("%d ", matriz [a][b]);
        } printf ("\n");
    } return 0;
}