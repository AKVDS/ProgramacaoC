#include <stdio.h>
int main (){
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i == 6); // ele vai executar até mesmo se for falsa a condição, mas só umas vez e não continua
    return 0;            // (i <= 6) ele vai executar até chegar o número desejado 
     }
    
