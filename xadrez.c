#include <stdio.h>
int main() {
    // mover a torre 5 casas para a direita 
    printf("\n Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // imprime a direção do movimento 
    }
    printf("Torre se moveu 5 casas para a direita.\n");

    // mover o Bispo 5 casas para a direita para cima 
    printf("\n Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n"); // imprime a direção do movimento 
    }
    printf("Bispo se moveu 5 casas a direita para cima .\n");

        // mover o Rainha 8 casas para a esquerda 
        printf("\n Rainha:\n");
        for (int i = 0; i < 8; i++) {
            printf("Esquerda\n"); // imprime a direção do movimento 
        }
        printf("Rainha se moveu 8 casas a esquerda .\n");
    
    return 0;    
}
