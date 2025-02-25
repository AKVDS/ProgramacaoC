#include <stdio.h>

void recursivo (int numero){
    if (numero > 0){
        recursivo (numero-1); // para fazer contagem crescente, altere a ordem: 1º recursivo e 2º printf
        printf ("%d \n", numero);
        }
}

int main (){
    int quantidade = 10; 

printf("Contagem regressiva: \n");
    recursivo (quantidade);

    return 0;
}