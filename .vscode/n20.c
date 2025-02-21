#include <stdio.h>
int main (){
    int i =0;

    while (i <= 10){
if (i % 2 == 0){      // dividindo 0/2 = 0 para poder dar par, porque não tem sobras 
    printf("O número %d é par!\n", i);    // (i % 2 != 0) ----> aqui o ! significa "diferente", vai saír números impares 
}
    
    i++;
    }
    return 0;
}