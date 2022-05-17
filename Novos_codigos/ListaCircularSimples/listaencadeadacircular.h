#include <iostream>
#include <stdlib.h>

using namespace std;

//1. Declara o tipo do n� de dado
struct lista{
	
	int info;
	struct lista* prox;
	
};
typedef struct lista Lista; //2. Transforma o n� de dado em tipo de vari�vel

Lista* inicializa();

Lista* insere_inicio(Lista* l, int i);

void imprime(Lista* l);

bool IsEmpty(Lista* l);

int tamanho(Lista* l);

void mostra_inicio(Lista* l);

void mostra_fim(Lista* l);

void ocorrencias(Lista* l, int v);

Lista* insere_fim(Lista*l, int i);

Lista* remove_inicio(Lista* l);

Lista* remove_fim(Lista* l);
