#include <stab.h>
int main (){

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //modificação condicional dos elementos da matriz

    for (int a = 0; a < 3; a++){  //loop externo - linhas
        for (int b = 0; b < 3; b++){  //loop interno - colunas
         if (matriz[a][b] > 5){
            matriz[a][b] = -matriz[a][b]; // se o elemento for maior que 5, torna-o negativo
         }

        }
    }
    
    //impressão da minha matriz modificada
    for (int a = 0; a < 3; a++){   //imprimir loop - linhas
        for (int b = 0; b < 3; b++){  //imprimir loop - colunas
            printf("%d ", matriz[a][b]);
        } printf ("\n");
    }  
}