#include "listaencadeadacircular.h"
#include <iostream>
#include <stdlib.h>

//Fun��o tipo ponteiro de Lista para retornar a lista atualizada
Lista* inicializa(){
	return NULL;
}

//Fun��o tipo ponteiro de Lista para retornar a lista atualizada
//PAR�METROS: Passamos a lista atual e o n�mero passado pelo usu�rio 
Lista* insere_inicio(Lista* l, int i){
	
	//Criamos um novo n� de dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	//Inserimos o valor passado no info do novo n�
	novo->info = i;
	//O prox do novo recebe o n� de dado anterior ou o NULL
	novo->prox = l;
	
	//Retornamos o endere�o de novo
	return novo;
}

//PAR�METROS: Passamos a lista atual
void imprime(Lista* l){
	
	Lista* p = l;
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		do{
		printf("%d\n", p->info); /* imprime informa��o do n� */
		p = p->prox; /* avan�a para o pr�ximo n� */
		} while (p != l);
	}
	cout << endl;
	
}

//Fun��o booleana, se a condi��o da linha 44 for verdadeira ela se porta como verdadeira em testes condicionais
//PAR�METROS: Passamos a lista atual
bool IsEmpty(Lista* l){
	
	return l == NULL;
}

//PAR�METROS: Passamos a lista atual
int tamanho(Lista* l){
	int cont=0;
	
	//Condi��o para percorrer a lista, explicada na linha 30 e 31
	for(Lista* p = l; p != l; p = p->prox){
		cont++;
	}
	return cont;
}

void mostra_inicio(Lista* l){
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		cout << "Primeiro elemento: " << l->info;
	}
	
}

void mostra_fim(Lista* l){
	
	Lista* p;
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		for(p = l; p != l; p = p->prox);
		
		cout << "�ltimo elemento: " << p->info;
	}
	
}

void ocorrencias(Lista* l, int v){
	int cont=0;
	
	for(Lista* p = l; p != l; p = p->prox){
		
		if(v==p->info){
		cont++;
		}

	}
	
	cout << "O elemento pesquisado aparece " << cont << " vezes na lista." << endl;
}

Lista* insere_fim(Lista*l, int i){
	
	//Criamos um novo n� de dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	//Inserimos o valor passado no info do novo n�
	novo->info = i;
	
	if(IsEmpty(l))
		insere_inicio(novo, i);
	else{
		for(novo = l; novo != l; novo = novo->prox);
		
		novo->info = i;
		
		cout << "Elemento inserido: " << novo->info << endl;
		
		imprime(l);
	}
	
	//Retornamos o endere�o de novo
	return novo;
}

Lista* remove_inicio(Lista* l){
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		Lista* p = l->prox;
		
		if(l != l->prox){
			l->prox = p->prox;
			
			cout << "Elemento removido" << endl;
			
			free(p);
			
			return l;
		}else{
			
			cout << "Elemento removido" << endl;
			
			free(p);
			
			return NULL;
		}
	}
}

Lista* remove_fim(Lista* l){
	
	Lista* p;
	
	for(p = l->prox; p->prox != l; p = p->prox);
	
	free(p);
	
	cout << "Elemento removido" << endl;
}


