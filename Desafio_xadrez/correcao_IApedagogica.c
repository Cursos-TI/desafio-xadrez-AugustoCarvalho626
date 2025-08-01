#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez
// Tema 1 – Movimentando as Peças do xadrez: correção da IA Pedagógica
// Teste: Augusto Bento Carvalho


int main(){

// Ultilizando o for

    printf("Movimentando a Torre 5 casa à direita na horizontal.\n");
    
    for (int i = 1; i <= 5; i++)
        {
            printf("Torre para Direita\n");
        }


// Declaração de variáveis para o Bispo
    int passos_bispo = 0;
    
// ultiliando while

    printf("Movimentando o Bispo 5 casa à direita na vertical.\n");
      
    while (passos_bispo < 5) 
    {
        printf("Bispo para Cima, Direita\n");
        passos_bispo++;
    }

// Declaração de variáveis para a Rainha
    int passos_rainha = 0;
    
// ultiliando while

    printf("Movimentando a Rainha 8 casas à esquerda na horizontal.\n");
    
        do{
            printf("Rainha para Esquerda\n");
            passos_rainha++;
        } while (passos_rainha < 8);

    return 0;
}