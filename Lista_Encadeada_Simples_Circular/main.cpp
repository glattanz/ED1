#include <iostream>
#include "listacircularsimples.h"
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void menu(){
	cout << "=======================" << endl;
	cout << "Selecione uma opção:" <<endl;
	cout << "1- Inserir no início" <<endl;
	cout << "2- Inserir no fim" <<endl;
	cout << "3- Verificar se há elementos" <<endl;
	cout << "4- Imprimir" <<endl;
	cout << "5- Retira" <<endl;
	//cout << "6- Print" <<endl;
	//cout << "7- Free" << endl;
	cout << "Other to quit" << endl;
	cout << "=======================" << endl;
}


int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "");
	
	unsigned int op(0);
	
	int x;
	Lista* l; /* declara uma lista não inicializada */
	
	l = inicializa(); /* inicializa lista como vazia */
 	
 	l = insere_inicio(l, 23); /* insere_inicio na lista o elemento 23 */
 	
 	l = insere_inicio(l, 45); /* insere_inicio na lista o elemento 45 */
 	
 	l = insere_fim(l, 50); /* insere_fim na lista o elemento 50 */
 	
 	l = insere_fim(l, 51); /* insere_fim na lista o elemento 50 */
 	
	do{
		menu();
		cin >> op;
		
		switch (op){
			
			case 1:
				cout << "Insira um número: ";
				cin >> x;
				cout << endl;
				insere_inicio(l, x);
				break;
				
			case 2:
				cout << "Insira um número: ";
				cin >> x;
				cout << endl;
				insere_fim(l, x);
				break;
				
			case 3:
				if (vazia(l))
					cout << "Lista vazia!" << endl;
				else 	
					cout << "A lista não está vazia!" << endl;
				break;	
			
			case 4:
				imprime(l);
				break;
			
			case 5:
				cout << "Insira valor para remover: " << endl;
				cin >> x;
				retira(l, x);
				cout << "Elemento removido!" << endl;					
				break;
		
			case 6:
				cout << "Insira valor para buscar: " << endl;
				cin >> x;
				busca(l, x);			
				break;
				
			default: 
				cout<<"Selecione uma das opções acima"<< endl;
		
		}cout << endl;
		
	}while(op > 0 && op < 8);	
	
	cout << "Fim do programa!" << endl;
	
	//------------------------------------------------
 	
	/*printf("Lista original...\n");
 	imprime(l);
 	printf("Retira 100...\n");
  	l = retira(l, 100);
 	imprime(l);
 	printf("Retira 45...\n");
 	l = retira(l, 45);
	imprime(l);
	printf("Retira 50...\n");
 	l = retira(l, 50);
	imprime(l);
	printf("Retira 51...\n");
 	l = retira(l, 51);
	imprime(l);
	printf("Retira 23...\n");
 	l = retira(l, 23);
	imprime(l);
	printf("Retira 1...\n");
 	l = retira(l, 1);
	imprime(l);*/
	
	system("pause");
	
	return 0;
	
}
