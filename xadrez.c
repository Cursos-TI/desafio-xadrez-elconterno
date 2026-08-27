#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("Movimento do Bispo cinco casas diagonal direita, cima:\n");
    
    int b = 0;
   
    while (b < 5)
    {
        printf("Direita, cima %d\n", b + 1);
        b++; // implementação incremento de mais 1 que não permite o loop infinito
    }
   printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("Movimento da Torre cinco casas para a direita:\n");
   
    for (int i = 0; i < 5; i++) { //incremento mais 1 a partir do zero
        printf("Direita %d\n", i + 1); //direção do movimento da peça
        }
    printf("\n");
       
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Movimento da Rainha oito casas para esquerda:\n");
    
    int r = 0;
   
    do {
        printf("Esquerda %d\n", r + 1);
        r++;
    } while (r < 8);   //movimento de oito casas 
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("\n");

    return 0;
}
