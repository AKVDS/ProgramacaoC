#include <stdio.h>
int main (){
    int numero;

    do {
        printf("Digite um número par para sair do programa. \n");
        scanf("%d\n", &numero);

        if (numero % 2 == 0) {
            printf("%d é par!\n", numero);

        } else {
            printf("%d é impar!\n", numero);
        }

    }while (numero % 2 != 0); //Quero que o número seja diferente de "0",porque "0" é par. Mas quero número impares
    
}