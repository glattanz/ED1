#include "listaencadeadasimples.h"
#include <iostream>
#include <stdlib.h>

//Função tipo ponteiro de Lista para retornar a lista atualizada
Lista* inicializa(){
	return NULL;
}

//Função tipo ponteiro de Lista para retornar a lista atualizada
//PARÂMETROS: Passamos a lista atual e o número passado pelo usuário 
Lista* insere_inicio(Lista* l, int i){
	
	//Criamos um novo nó de dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	//Inserimos o valor passado no info do novo nó
	novo->info = i;
	//O prox do novo recebe o nó de dado anterior ou o NULL
	novo->prox = l;
	
	//Retornamos o endereço de novo
	return novo;
}

//PARÂMETROS: Passamos a lista atual
void imprime(Lista* l){
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		//PARÂMETROS: Criamos um novo ponteiro para percorrer a lista e inicializamos ele em l (início)
		//Enquanto p for diferente de NULL (fim da lista), p avança para o próximo nó
		for(Lista* p = l; p!=NULL; p = p->prox){
			cout << p->info << " - " ;
		}
	}
	cout << endl;
	
}

//Função booleana, se a condição da linha 44 for verdadeira ela se porta como verdadeira em testes condicionais
//PARÂMETROS: Passamos a lista atual
bool IsEmpty(Lista* l){
	//Se l = NULL, retorna vazia (FALSE)
	return l == NULL;
}

//PARÂMETROS: Passamos a lista atual
int tamanho(Lista* l){
	int cont=0;
	
	//Condição para percorrer a lista, explicada na linha 30 e 31
	for(Lista* p = l; p != NULL; p = p->prox){
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
		for(p = l; p != NULL; p = p->prox);
		
		cout << "Último elemento: " << p->info;
	}
	
}
