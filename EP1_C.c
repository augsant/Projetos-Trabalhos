// nota no EP: 10/10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    int modo, pecas, max, turno, retirar, restantes, jogador;
    bool ultimo = true;
    
    turno = 1;
    retirar = 0;
    jogador = 1;
    
    printf("[1]: jogador1 vs jogador2 \n");
    printf("[2]: jogador vs computador \n");
    
    printf("Escolha o modo do jogo:")/
    scanf("%d", &modo);
    printf("\n");
    printf("Entre com o numero de pecas:");
    scanf("%d", &pecas);
    printf("\n");
    restantes = pecas;
    
    printf("Entre com o numero maximo de pecas que podem ser retiradas:");
    scanf("%d", &max);
    printf("\n");
    printf("***** \n");
    
    // construção do modo 1: jogador1 vs jogador2
    
    if (modo ==1 ) {
        while (restantes > 0) {
            if (turno % 2 == 0) {
                jogador = 2;
            }
            else {
                jogador = 1;
            }
        
        printf("Turno: %d \n", turno);
        printf("Jogador: %d \n", jogador);
        printf("Quantas pecas voce gostaria de retirar?:");
        scanf("%d", &retirar);
        printf("\n");
        printf("Jogador retirou %d peca(s) \n", retirar);
        restantes = pecas - retirar;
        pecas = restantes;
        printf("Numero de pecas restantes = %d \n", restantes);
        printf("***** \n");
        
        turno = turno + 1;
        
        }
        printf("Jogador %d ganhou!", jogador);
    }
    
    //construção do modo 2: jogador1 vs computador
    
    else {
        while (restantes > 0) {
            printf("Turno: %d \n", turno);
            
            if (!(pecas % (max + 1) == 0)) {
                retirar = 0;
                while (!((pecas - retirar) % (max + 1) == 0)) {
                    retirar = retirar + 1;
                }
                printf("Computador retirou %d peca(s) \n", retirar);
                ultimo = true;
            }
            else {
                printf("Quantas pecas voce gostaria de retirar?:", retirar);
                scanf("%d", &retirar);
                printf("Jogador retirou %d peca(s) \n", retirar);
                ultimo = false;
            }
            
            restantes = pecas - retirar;
            pecas = restantes;
            printf("Numero de pecas restantes = %d \n", restantes);
            printf("***** \n");
            
            turno = turno + 1;
        }
        
        if (ultimo == true) {
            printf("Que pena! Voce perdeu!");
        }
        else {
            printf("Jogador 1 ganhou!");
        }
    }
    return 0;
}
