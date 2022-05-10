#include "lista_simples.h"
#include "stdlib.h"

//Fun��o tipo ponteiro de Lista para retornar a lista atualizada
Lista* inicializa(){
	return NULL;
}

//Fun��o tipo ponteiro de Lista para retornar a lista atualizada
//PAR�METROS: Passamos a lista atual e o n�mero passado pelo usu�rio 
Lista* insere_inicio(Lista* l, int l){
	
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
	
	if(IsEmpty(l))
		cout << "Lista vazia!";
	else{
		//PAR�METROS: Criamos um novo ponteiro para percorrer a lista e inicializamos ele em l (in�cio)
		//Enquanto p for diferente de NULL (fim da lista), p avan�a para o pr�ximo n�
		for(Lista* p = l; p!=NULL; p->prox){
			cout << p->info << " - " ;
		}
	}
	cout << endl;
	
}

//PAR�METROS: Passamos a lista atual
bool IsEmpty(Lista* l){
	//Se l = NULL, retorna vazia (0)
	return l == NULL;
}
