#include <stdio.h>

int main (){

    int i, j; //colocando a variável já definida de início, não precisa colocar dentro ().

    char letra;
   
   
    for (i =1; i <= 5; i++){
       letra = 'A';
        
       for (j = 1; j <= i; j++){ // O "i" já está definido já que ele é externo.
// J = 1 e I = 1, logo ele irá executar uma vez, mas se I = 2, o J irá executar até 2 vezes, etc. Porque o principal é o LOOP EXTERNO que tem o comando como base.
       
printf("%c ", letra);
++letra; //incremento, vai mudar a letra (alfabeto).

}
 printf("\n");
    }

    return 0; 
}