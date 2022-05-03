//lista_simples_circular.h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//declara a estrutura do nó de dado
struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa();

bool vazia(Lista* l);

Lista* insere_inicio(Lista* l, int i);

Lista* insere_fim(Lista* l, int i);

void imprime(Lista* l);

Lista* retira(Lista* l, int v);

Lista* busca (Lista* l, int v);

void quant (Lista*l);

Lista* remove_inicio(Lista* l);

Lista* remove_fim(Lista* l);

void imprime_inicio(Lista* l);

void imprime_fim(Lista* l);
