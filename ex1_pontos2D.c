#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto2D.h"
#include <time.h>

int main(){
    srand(time(NULL));

    ponto2D* pontos[10];
    ponto2D *p, *p_min = NULL;
    float dist, dist_min = INFINITY;

    for (int i=0; i<10; i++){
        pontos[i] = criar_p (rand()%31 -15, rand()%31 -15);
    }

    for(int i = 0; i < 10; i++) {
        p = pontos[i];
        dist = calcular_distancia(p, criar_p(0, 0));
        if(dist < dist_min) {
            dist_min = dist;
            p_min = p;
        }
    }

    for (int i=0; i<10; i++){
        ponto2D *sx = simX_p(pontos[i]);
        ponto2D *sy = simY_p(pontos[i]);
        exibir_p(pontos[i]);
        exibir_p(sx);
        exibir_p(sy);
        printf("\nquadrante: %d\n\n", quadrante_p(pontos[i]));
    }

    printf("Ponto mais proximo da origem: ");
    exibir_p(p_min);
    printf("\n");

    for(int i = 0; i < 10; i++) {
        free(pontos[i]);
    }

    return 0;
}