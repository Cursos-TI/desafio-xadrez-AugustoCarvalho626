#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez
// Tema 1 – Movimentando as Peças do xadrez
// Teste: Augusto Bento Carvalho


int main(){

// Declaração de variáveis para Torre
    int n_linha, linha_torre;
    char l_coluna, coluna_torre;

     do {

        printf("Torre está na casa A1: Coluna A / Linha 1.\n");
        printf("Movimente a Torre 5 casa à direita na horizontal.\n");
        printf("Digite com letra maiuscula, a letra da coluna:\n");
        scanf(" %c", &coluna_torre);
        printf("Digite o número da linha:\n");
        scanf(" %d", &linha_torre);
    
// Para garantir que o movimento da Torre seja o que foi pedido
        if(coluna_torre == 'F' && linha_torre == 1) {
            for (l_coluna = 'A'; l_coluna <= coluna_torre; l_coluna++){
            for (n_linha = 1; n_linha <= linha_torre; n_linha++){
                printf("Casa: %c%d \n", l_coluna, n_linha);
            }
            }
            printf("\nBoa jogada!\n");
        } else {
            printf("Xeque-Mate!\n");
            printf("\nTente de novo.\n");
        }

    }while (coluna_torre != 'F' || linha_torre != 1);


    printf("\nPronto para proxima jogada?\n");

// Declaração de variáveis para o Bispo
    int n_linha1, linha_bispo;
    char l_coluna1, coluna_bispo;

     do {

        printf("Bispo está na casa C1: Coluna C / Linha 1\n");
        printf("Movimente o Bispo 5 casa à direita na vertical.\n");
        printf("Digite com letra maiuscula, a letra da coluna:\n");
        scanf(" %c", &coluna_bispo);
        printf("Digite o número da linha:\n");
        scanf(" %d", &linha_bispo);

// Para garantir que o movimento do Bispo seja o que foi pedido
        if(coluna_bispo == 'H' && linha_bispo == 6) {
            for (l_coluna1 = 'C'; l_coluna1 <= coluna_bispo; l_coluna1++){
            for (n_linha1 = 1; n_linha1 <= linha_bispo; n_linha1++){
                printf("Casa: %c%d \n", l_coluna1, n_linha1);
            }
            }
            printf("\nBoa jogada!\n");
        } else {
            printf("Xeque-Mate!\n");
            printf("\nTente de novo.\n");
        }

    }while (coluna_bispo != 'H' || linha_bispo != 6);


    printf("\nPronto para proxima jogada?\n");

// Declaração de variáveis para a Rainha
    int n_linha2, linha_rainha;
    char l_coluna2, coluna_rainha;

     do {

        printf("Rainha está na casa H3: Coluna H / Linha 3\n");
        printf("Movimente a Rainha 8 casa à esquerda na vertical.\n");
        printf("Digite com letra maiuscula, a letra da coluna:\n");
        scanf(" %c", &coluna_rainha);
        printf("Digite o número da linha:\n");
        scanf(" %d", &linha_rainha);

// Para garantir que o movimento da Rainha seja o que foi pedido
        if(coluna_rainha == 'A' && linha_rainha == 3) {
            for (l_coluna2 = 'H'; l_coluna2 >= coluna_rainha; l_coluna2--){
            for (n_linha2 = 3; n_linha2 <= linha_rainha; n_linha2++){
                printf("Casa: %c%d \n", l_coluna2, n_linha2);
            }
            }
            printf("\nBoa jogada!\n");
        } else {
            printf("Xeque-Mate!\n");
            printf("\nTente de novo.\n");
        }

    }while (coluna_rainha != 'A' || linha_rainha != 3);


    printf("\n### Parabéns, voçê jogou bem! ###\n");



    return 0;
}