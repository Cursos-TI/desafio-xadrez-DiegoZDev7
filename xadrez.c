#include <stdio.h>

void Torre (int casas){
    if(casas > 0){
        printf("Torre se move para direita\n");
        Torre(casas - 1);
    }
}

void Rainha (int casas){
    if(casas > 0){
        printf("Rainha se move para a esquerda\n");
        Rainha(casas - 1);
    }
}

void Bispo (int casas){
    if(casas > 0){
        printf("Bispo se move para cima e direita\n");
        Bispo(casas - 1);
    }
}

int main(){

    int cavalo;
    int movimentoCompleto = 1;

    Torre(5);
    Rainha(8);
    Bispo(5);

    
    //cavalo
    while (movimentoCompleto--)
    {
        for (cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("Cavalo se move para cima\n");
        }
        printf("Cavalo se move para esquerda\n");
    }
    
    return 0;
}