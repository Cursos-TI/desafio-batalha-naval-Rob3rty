#include <stdio.h>

int main()
{
    char linha[10] ={'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++)  //posicionando as linhas da matriz
    {
        printf("%c ",linha[i]);   
    }
    printf("\n");

    int navio1[3] = {3,3,3};  //declarando e posicionando os navios no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][2+i] = navio1[i];
    }
    for (int j = 0; j < 3; j++)
    {
        tabuleiro[6+j][5] = navio1[j];
    }

    for (int i = 0; i < 3; i++)  //posicionando o navio na horizontal
    {
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro[i] == tabuleiro[j])
            {
                tabuleiro[5+i][7+j]= navio1[j];
            }  
        }
    }

    for (int i = 0; i < 3; i++)  //posicionando o navio na horizontal, da esquerda para direita    
    {
        int linha = 7 + i;
        int coluna = 2 - i;

        if (linha < 10 && coluna >= 0)
        {
            tabuleiro[linha][coluna]= navio1[i];
        }
    }

    for (int i = 0; i < 10; i++) {  //enumerando as colunas da matriz
        printf("%2d ",i+1);       
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}