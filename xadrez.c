#include <stdio.h>

int main(){

    int bispo = 1, torre;
    int rainha = 1;

    while (bispo <= 5){
        printf("Bispo se move para cima e direita\n");
        bispo++;
    }
    
    do
    {
        printf("A rainha se move para a esquerda\n");
        rainha++;
    } while (rainha <=8);
    

    for (torre = 0; torre < 5; torre++)
    {
        printf("A torre se move para a direita\n");
    }
    
    return 0;
}