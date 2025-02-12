#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    //criança < 12
    //adolescente 12 <= x < 18
    // adulto <= 18 x < 60
    //idoso > 60

    if(idade < 12 ){
        printf("você é uma criança\n");
    } else if (idade >= 12 && idade < 18){
        printf("você é um adolescente \n");
       } else if ( idade >= 18 && idade < 60 ) {
            printf("você é um adulto \n");
        } else {
            printf("você é um idoso \n");
        }
    }

    


