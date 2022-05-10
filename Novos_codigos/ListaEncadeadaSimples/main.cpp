#include "listaencadeadasimples.h"
#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout << "1- Insere_inicio" << endl;
	cout << "2- Imprimir" << endl;
	cout << "3- Verifica Lista se eh vazia" << endl;
	cout << "4- Tamanho da Lista" << endl;
	cout << "5- Mostrar início" << endl;
	cout << "6- Mostrar fim" << endl;
	cout << "? " << endl;
}

int main(int argc, char** argv) {
	
	//3. Declara a lista
	Lista* l;
	
	//4. Inicia a lista n. l está apontando pra NULL.
	l = inicializa();
	
	//Variável para receber o valor informado pelo usuário do menu
	int op(0);
	
	do{
		//Printa o menu
		menu();
		//5. Pede a alternativa do menu para o usuário
		cin >> op;
		
		switch(op){
			
			case 1:
				int x;
				
				cout << "Informe o valor a ser inserido: ";
				cin >> x;
				
				//Retornamos o endereço de novo para o l (início)
				l = insere_inicio(l, x);
				
				break;
				
			case 2:
				imprime(l);
				
				break;
				
			case 3:
				//Se a função for verdade:
				if (IsEmpty(l))
					cout << "Lista é vazia!\n" << endl;
				else 
					cout << "Lista não é vazia!\n" << endl;
					
				break;	
						
			case 4:
				cout << "Tamanho da Lista é: " << tamanho(l) << endl;
				
				break;	
			
			case 5:
				mostra_inicio(l);
				
				break;
			
			case 6:
				mostra_fim(l);
				
				break;	
				
			default:
				cout << "Opção invalida! \n";	
		}  
		
	}while(op > 0 && op < 10);
	
	cout << "Fim de programa!\n"; 
	
	return 0;
}
