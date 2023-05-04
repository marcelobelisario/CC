#ifndef PONTO2D_H // include guard // Arquivo ponto2D.h
#define PONTO2D_H
#include <stdio.h>

typedef struct ponto ponto2D;

/*
Cria um ponto e retorna uma referência para ele
Entrada: coordenadas do ponto
Saída: referência para um ponto
*/
ponto2D* criar_p(float x, float y);

/*
Exibe um ponto no formato de par ordenado => (x, y)
Entrada: uma referência para um ponto
Saída: Não tem
*/
void exibir_p(ponto2D *p);
#endif // PONTO2D_H

/*
Libera a memoria alocada para o ponteiro de um ponto
Entrada: ponteiro p do tipo ponto2D
Saida: não tem
*/
void liberar_memoria(ponto2D *p);

/*
Calcula a distancia entre dois pontos
Entrada: ponteiro de um ponto p e ponteiro de um ponto pp
Saida: distancia entre p e pp
*/
float calcular_distancia(ponto2D *p, ponto2D *pp);

/*
Verifica em que quadrante o ponto está
Entrada: ponteiro de um ponto tipo ponto2D
Saida: valor de acordo com o quadrante que o ponto está
*/
int quadrante_p(ponto2D *p);

/*
Retorna um ponto simetrico em relação ao eixo X
Entrada: ponteiro de um ponto tipo ponto2D
Saida: ponto simetrico em relação ao eixo x
*/
ponto2D* simX_p(ponto2D *p);

/*
Retorna um ponto simetrico em relação ao eixo Y
Entrada: ponteiro de um ponto tipo ponto2D
Saida: ponto simetrico em relação ao eixo Y
*/
ponto2D* simY_p(ponto2D *p);