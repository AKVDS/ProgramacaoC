#include <stdio.h>

int main (){

    int idade;
    float renda; 
    int dependentes; 

    printf("Digite sua idade: \n");
    scanf ("%d", &idade);
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: \n");
    scanf ("%d", &dependentes);
    
    if (idade >= 18 && idade < 65){
    if (renda < 3000){
    if (dependentes > 2){

    printf("Você atende a todos os critérios. \n");
    } else {
        printf("Você não atende ao critério dependentes. \n");
    }
   
    }else{
        printf("Você não atende ao critério renda. \n");
    }
    }else {
        printf("Você não é aceito ao critério idade. \n");
    }
        
}