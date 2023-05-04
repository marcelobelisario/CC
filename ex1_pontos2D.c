#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto2D.h"
#include <time.h>

int main(){
    // Usado com base na hora do relógio do Windows para criar valores aleatórios para algo.
    srand(time(NULL));

    // Declaração dos pontos e variaveis úteis
    ponto2D* pontos[10];
    ponto2D *p, *p_min = NULL;
    float dist, dist_min = INFINITY;

    // Cria valores aleatorios entre -15 e 15 para um ponto.
    for (int i=0; i<10; i++){
        pontos[i] = criar_p (rand()%31 -15, rand()%31 -15);
    }


    // Estrutura de repetição que exibe o ponto original,
    // um novo ponto simétrico ao eixo X, um novo ponto simétrico ao eixo Y
    // e exibe também o quadrante referente ao ponto principal.
    for (int i=0; i<10; i++){
        ponto2D *sx = simX_p(pontos[i]);
        ponto2D *sy = simY_p(pontos[i]);
        exibir_p(pontos[i]);
        exibir_p(sx);
        exibir_p(sy);
        printf("\nquadrante: %d\n\n", quadrante_p(pontos[i]));
    }

    // Estrutura de repetição que verifica qual o ponto mais próximo da origem.
    for(int i = 0; i < 10; i++) {
        p = pontos[i];
        dist = calcular_distancia(p, criar_p(0, 0));
        if(dist < dist_min) {
            dist_min = dist;
            p_min = p;
        }
    }

    //  Exibe o ponto mais próximo da origem.
    printf("Ponto mais proximo da origem: ");
    exibir_p(p_min);
    printf("\n");

    // Faz a limpeza da memória alocada para os pontos criados.
    for(int i = 0; i < 10; i++) {
        free(pontos[i]);
    }

    return 0;
}