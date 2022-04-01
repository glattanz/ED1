#include <iostream>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	
	printf("1 - Mostrar início\n");
	printf("2 - Mostrar fim\n");
	printf("3 - Informar o tamanho da lista\n");
	printf("4 - Informar o número de ocorrências de um elemento\n");
	printf("5 - Remove elemento do inicio da lista\n");
	printf("6 - Remove elemento do fim da lista\n");
	printf("7 - Inserir no fim\n");
	printf("8 - Remove recursivo\n");
	printf("9 - Libera recursivo\n");
	printf("10 - Imprime recursivo\n");
	
	printf("Insira a opção desejada: ");
	scanf("%d", &op);
	return op;
}

int main(int argc, char** argv) {
	
	unsigned int op(0);	
	
	Lista* l;
	int x; //auxiliar
	int op;
	
	//l é uma variavel tipo struct (Lista) q representa um no de dado
	l = inicializa();
	
	do{
		
		op = menu();
		
		switch(op)
		{
			case 1:
				mmostraInicio(Lista* l);
			
			case 2:
				mostraFim(Lista* l);

			case 3: 
				int t = tamanho(Lista* l);
				
				printf("O tamanho da lista é de %d elementos.", t);
			
			case 4:
				printf("Digite um elemento para saber quantas vezes ele aparece na lista:");
				scanf("%d", x);
				int qtd = ocorrencias (Lista* l, int x);
				
				printf("O elemento %d aparece %d vezes na lista", x, qtd);

			case 5:
 				removeInicio()
 				printf("Elemento removido!");
 				
 				printf("Lista atual:");
 				imprime(Lista* l);
				
				
			case 6:
				removeFim()
				printf("Elemento removido!");
 				
 				printf("Lista atual:");
 				imprime(Lista* l);
				
			case 7:
				printf("Informe o valor a ser inserido:")
				scanf("%d", x);
				
				l = insereFim(l, x);
			
			case 8:
				
				printf("Informe o valor a ser remmovido:")
				scanf("%d", x);
				
				l = retira_rec(l, x);
				
			case 9:
				libera_rec(l);
				
			case 10:
				imprime(Lista* l);
				
			default:
				printf("\nInsira uma das opções acima!"\n);
				
		}
	}while(op > 0 && op < 11);
	
	return 0;
}

