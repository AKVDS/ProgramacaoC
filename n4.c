#include<stdio.h>

int main(){

    int idade = 20;
    float altura = 1.75;

// idade >= 18 = verdadeiro
//idade <= 30 = verdadeiro
//verdadeiro && verdadeiro = verdadeiro
//altura > 1.70 = verdadeiro
// verdadeiro && verdadeiro = verdadeiro 
    
     if (idade >= 18 && idade <= 30 && altura > 1.70){
       printf("você está na faixa etária e tem altura adequada\n");
     } 
     else{
        printf("você não atende aos critérios\n");
     }
}

