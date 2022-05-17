#include "listaencadeadasimples.h"
#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout << "\n===== MENU =====" << endl;
	cout << "1- Insere_inicio" << endl;
	cout << "2- Imprimir" << endl;
	cout << "3- Verifica Lista se eh vazia" << endl;
	cout << "4- Tamanho da Lista" << endl;
	cout << "5- Mostrar in�cio" << endl;
	cout << "6- Mostrar fim" << endl;
	cout << "7- N�mero de ocorr�ncias de um elemento" << endl;
	cout << "8- Insere fim" << endl;
	cout << "9- Remove in�cio" << endl;
	cout << "10- Remove fim" << endl;
	cout << "? " << endl;
}

int main(int argc, char** argv) {
	
	//3. Declara a lista
	Lista* l;
	
	//4. Inicia a lista n. l est� apontando pra NULL.
	l = inicializa();
	
	//Vari�vel para receber o valor informado pelo usu�rio do menu
	int op(0);
	
	do{
		//Printa o menu
		menu();
		//5. Pede a alternativa do menu para o usu�rio
		cin >> op;
		
		switch(op){
			
			case 1:
				int x;
				
				cout << "Informe o valor a ser inserido: ";
				cin >> x;
				
				//Retornamos o endere�o de novo para o l (in�cio)
				l = insere_inicio(l, x);
				
				break;
				
			case 2:
				imprime(l);
				
				break;
				
			case 3:
				//Se a fun��o for verdade:
				if (IsEmpty(l))
					cout << "Lista � vazia!\n" << endl;
				else 
					cout << "Lista n�o � vazia!\n" << endl;
					
				break;	
						
			case 4:
				cout << "Tamanho da Lista �: " << tamanho(l) << endl;
				
				break;	
			
			case 5:
				mostra_inicio(l);
				
				break;
			
			case 6:
				mostra_fim(l);
				
				break;	
			
			case 7:
				
				cout << "Insira um valor para ser encontrado na lista: " << endl;
				
				cin >> x;
				
				ocorrencias(l, x);
				
				break;	
			
			case 8:
				
				cout << "Informe o valor a ser inserido: ";
				cin >> x;

				l = insere_fim(l, x);
				
				break;
				
			case 9:
				
				l = remove_inicio(l);
				
				break;
				
			case 10:
				
				l = remove_fim(l);
				
				break;
					
			default:
				cout << "Op��o invalida! \n";	
		}  
		
	}while(op > 0 && op < 100);
	
	cout << "Fim de programa!\n"; 
	
	return 0;
}


