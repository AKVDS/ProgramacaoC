#include <stdio.h>
int main (){

    for (int i = 1; i <= 10; i++){
     for (int j = 1; j <= 10; j++ ){
       printf("%d\n", i * j);
     }
       printf("\n");  // organiza a saída loop interno (j) e depois o loop externo (i)
    } 


    return 0;
}