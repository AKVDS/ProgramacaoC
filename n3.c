#include <stdio.h>

int main (){

    int a = 5;
    int b = -10;
    int c = 1;

    // ordem para verificar: 
    // a > 0 = verdadeiro
    // b < 0 = verdadeiro
    // verdadeiro && verdadeiro = verdadeiro
    // verdadeiro || ---- c == (igual) 0 = falso
    // verdadeiro || falso = verdadeiro 

    if(a > 0 && b < 0 || c == 0){
        printf("condição é verdadeira.\n");
    } else {
        printf("condição é falsa.\n");

    }
}
