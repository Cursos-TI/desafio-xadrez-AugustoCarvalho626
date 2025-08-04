#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez
// Tema 3 – Criando Movimentos Complexos
// Teste: Augusto Bento Carvalho

// Recursividade para Torre
void movertorre(int casatorre){
    if(casatorre > 0){
        printf("Torre para Direita\n");
        movertorre(casatorre -1);
    }
}

// Recursividade para Bispo
void moverbispo(int casabispo){
    if(casabispo > 0){
        printf("Direita\n");
        moverbispo(casabispo -1);
    }
}

// Recursividade para Rainha
void moverrainha(int casarainha){
    if(casarainha > 0){
        printf("Rainha para Esquerda\n");
        moverrainha(casarainha -1);
    }
}

int main(){

// Ultilizando a Recursividade na Torre

    printf("Movimentando a Torre 5 casa à direita na horizontal.\n");
    
   movertorre(5);


// Declaração de variáveis para o Bispo
    int passos_bispo = 0;
    
// Ultiliando while e a Recursividade no Bispo

    printf("Movimentando o Bispo 5 casa à direita na diagonal.\n");
      
    while (passos_bispo < 5) 
    {
        printf("Bispo para Cima, ");
        passos_bispo++;
        moverbispo(1);
    }
    

// Ultilizando a Recursividade na Rainha

    printf("Movimentando a Rainha 8 casa à esquerda na horizontal.\n");
    
   moverrainha(8);


// Declaração de variáveis para o Cavalo

   int movimento = 0;

// ultiliando  for

   printf("Movimentando o Cavalo para cima em L.\n");

   for (int i = 0; i < 3; i++)
    if (movimento < 2){
        printf("Cavalo para Cima\n");
        movimento++;
    }else{
        printf("Cavalo para Direita\n"); 
    }
       
    


    return 0;
}