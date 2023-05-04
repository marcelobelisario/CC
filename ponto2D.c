#include <stdio.h> // Arquivo ponto2D.c
#include <stdlib.h>
#include "ponto2D.h"
#include <math.h>

struct ponto {
    float x, y;
};

ponto2D* criar_p(float x, float y) {
    ponto2D* novo = (ponto2D*) calloc(1, sizeof(ponto2D));
    if(novo != NULL) {
        novo->x = x;
        novo->y = y;
    }
    return novo;
}

void exibir_p(ponto2D *p) {
    printf("\n<%.2f, %.2f>", p->x, p->y);
}

void liberar_memoria(ponto2D *p){
    free(p);
}

float calcular_distancia(ponto2D *p1, ponto2D *p2){
    float px = p2->x - p1->x;
    float py = p2->y - p1->y;
    return sqrt(px*px + py*py);
}

int quadrante_p(ponto2D *p){
    if ((p->x > 0) && (p->y > 0)){
        return 1;
    }
    if ((p->x < 0) && (p->y > 0)){
        return 2;
    }
    if ((p->x < 0) && (p->y < 0)){
        return 3;
    }
    if ((p->x > 0) && (p->y < 0)){
        return 4;
    }
    if ((p->x == 0) && (p->y !=0)){
        return 5;
    }
    if ((p->y == 0) && (p->x != 0)){
        return 6;
    }
}

ponto2D* simX_p(ponto2D *p){
    ponto2D *novo = criar_p (p->x, -(p->y));
    return novo;
}

ponto2D* simY_p(ponto2D *p){
    ponto2D *novo = criar_p (-(p->x), p->y);
    return novo;
}


