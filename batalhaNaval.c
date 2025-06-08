#include <stdio.h>

int main()
{
    char linha[10] ={'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ",linha[i]);   //posicionando as linhas da matriz
    }
    printf("\n");

    int navio1[3] = {3,3,3};    //declarando e posicionando os navios no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][2+i] = navio1[i];
    }
    for (int j = 0; j < 3; j++)
    {
        tabuleiro[5+j][5] = navio1[j];
    }

    for (int i = 0; i < 10; i++) {
        printf("%2d ",i+1);       //enumerando as colunas da matriz
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
