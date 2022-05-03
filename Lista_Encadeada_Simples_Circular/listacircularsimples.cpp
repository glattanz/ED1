//Aula ED - prof. Irineu
//lista_simples_circular.cpp
#include "listacircularsimples.h"


/* função de inicialização: retorna uma lista vazia */
Lista* inicializa(){ //ok
	return NULL;
}

bool vazia(Lista* l){ //verifica se lista está vazia: true caso positivo!
	return l == NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	//l é ponteiro para último nó-dado, l->prox estará apontando para 1o nó-dado
	//criando novo nó-dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	//testar se é o primeiro encadeamento
	if (vazia(l)){
		novo->prox = novo;
		return novo;
	}else{
		novo->prox = l->prox; //faz novo se o 1o, e o antigo 1º ser segundo...
		l->prox = novo; //atualiza o encadeamento do nó-final com o novo 1o nó-dado
	}
	return l;	
}

//ERRADA
/* inserção no fim: retorna a lista atualizada */
Lista* insere_fim(Lista* l, int i){
	
	if (vazia(l)){ //se for 1a inserção... delega para insere_inicio
		return insere_inicio(l, i);
	}else{
	//senão... faz-se o último virar penúltimo...
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	
	return novo;
	}
}

/* função imprime: imprime valores dos elementos */
void imprime(Lista* l){
	if (!vazia(l)){
		Lista* p = l->prox; /* variável auxiliar aponta para nó inicial */
	 	printf("Info: ");
		do{ //garantir a travessia da lista mesmo no caso de único nó, partindo do inicial e usando-o tb para teste final
			printf("%d - ", p->info);	
			p = p->prox;
		}while(p !=l->prox); 
		printf("\n"); 
	}else printf("Lista é vazia!\n");
	return l;
}

//QUANDO RETIRA TUDO FINALIZA O CODIGO
/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
		
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
	do{ //garantir a travessia da lista mesmo no caso de único nó, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;
		ant = p;
		p = p->prox;	
	}while(p != l->prox); 
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox) //ok
 		return l; /* não achou: retorna lista original */
 	//verifica se há apenas 1 nó-dado
 	if (p == p->prox){ 
 		free(p);
 		return NULL;
	}
	//achou nó-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox){//ok //primeiro nó-dado em p
		l->prox = p->prox; //último aponta para segundo
		free(p);
		return l;
	}
	//senão, é nó intermediário para final
	ant->prox = p->prox;
	if (p == l){//se p aponta para o último nó-dado
		l = ant;
	} 
	free(p);
	return l;
}

Lista* busca (Lista* l, int v){
 Lista* p; //variavel para andar
	for (p=l; p!=NULL; p=p->prox){
	 	if (p->info == v){
	 	return p;
	 	cout << "Elemento encontrado!" << endl;
	}
}
	 
	return NULL; /* não achou o elemento */
	cout << "Elemento não encontrado." << endl;
}

Lista*quant (Lista*l, int v){
	Lista* p; //variavel para andar
	for (p=l; p!=NULL; p=p->prox)
		int qtd++;
	
	cout << "A lista possui:" << qtd << "elementos" << endl;

}

Lista* remove_inicio(Lista* l, int i){
	//l é ponteiro para último nó-dado, l->prox estará apontando para 1o nó-dado
	
	//testar se é o primeiro encadeamento
	if (vazia(l)){
		cout << "Lista vazia!" << endl;
		return l;
	}else{
		Lista* p = (Lista*) malloc(sizeof(Lista));
		p = l->prox;
		l->prox = p->prox;
		free(p);
		return l;
	}
	
}

Lista* remove_fim(Lista* l, int i){
	
	//testar se é o primeiro encadeamento
	if (vazia(l)){
		cout << "Lista vazia!" << endl;
		return l;
	}else{
		Lista* p = (Lista*) malloc(sizeof(Lista));
		
		for (p=l; p!=NULL; p=p->prox){
			if(p->prox==l || p->prox==NULL){
				free(p);
			}
		}
		
		return l;
	}
	
}



