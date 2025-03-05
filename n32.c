#include <stdio.h>
int main () {

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int elementoEncontrado = 5;
    int elementoNaoencon = 0;  // Variável que indicará se o elemento foi encontrado

    // Busca condicional do elemento alvo
    for (int a = 0; a < 3; a++) {  // Loop externo - linhas
        for (int b = 0; b < 3; b++) {  // Loop interno - colunas
            if (matriz[a][b] == elementoEncontrado) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", elementoEncontrado, a, b);
                elementoNaoencon = 1;  // Atualiza a variável para indicar que o elemento foi encontrado
                break;
            }
        }
        if (elementoNaoencon) break;  // Se o elemento foi encontrado, sai do loop externo
    }

    if (!elementoNaoencon) {  // Se o elemento não foi encontrado
        printf("Elemento %d não encontrado na matriz.\n", elementoEncontrado);
    }

    return 0;
}
