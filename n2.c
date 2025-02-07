#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque; 
    
    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

if (temperatura > 30.0){
    printf("Está alta a temperatura. \n");
    }
else {
    printf("Está baixa a temperatura. \n");
}
if (umidade > 50){
    printf("Umidade está alta. \n");
}
else {
    printf("Umidade está baixa. \n");
}
if (estoque > 1000){
    printf("Estoque está alto. \n");
}
else {
    printf("Estoque está baixo. \n");
}
}
