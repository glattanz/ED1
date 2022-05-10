#include "lista_simples.h"
#include "stdlib.h"

//Função tipo ponteiro de Lista para retornar a lista atualizada
Lista* inicializa(){
	return NULL;
}

//Função tipo ponteiro de Lista para retornar a lista atualizada
//PARÂMETROS: Passamos a lista atual e o número passado pelo usuário 
Lista* insere_inicio(Lista* l, int l){
	
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
		for(Lista* p = l; p!=NULL; p->prox){
			cout << p->info << " - " ;
		}
	}
	cout << endl;
	
}

//PARÂMETROS: Passamos a lista atual
bool IsEmpty(Lista* l){
	//Se l = NULL, retorna vazia (0)
	return l == NULL;
}
