#include <iostream>
#include <stdlib.h>

using namespace std;

//1. Declara o tipo do nó de dado
struct lista{
	
	int info;
	struct lista* prox;
	
};
typedef struct lista Lista; //2. Transforma o nó de dado em tipo de variável

Lista* inicializa();

Lista* insere_inicio(Lista* l, int i);

void imprime(Lista* l);

bool IsEmpty(Lista* l);

int tamanho(Lista* l);

void mostra_inicio(Lista* l);

void mostra_fim(Lista* l);
