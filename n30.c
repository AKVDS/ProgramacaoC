#include <stab.h>
int main (){

    int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int increpares = 0 , increimpar = 0;

    //contagem de elemntos pares e impares 

    for (int a = 0; a < 3; a++){  // loop externo - linhas
        for (int b = 0; b < 3; b++){ // loop interno - colunas
            if (matriz[a][b] % 2 == 0){
                increpares++; // incremento o contador de pares
            } else {
                increimpar++; // incremento o contador de impares
            }

        }
    }
   // impressão dos resultados
  
   printf ("Números de elementos pares: %d\n", increpares);
   printf ("Números de elementos ímpares: %d\n", increimpar);

   return 0;
}