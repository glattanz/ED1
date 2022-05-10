#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout << "1- Insere_inicio" << endl;
	cout << "2- Imprimir" << endl;
	cout << "3- Verifica Lista se eh vazia" << endl;
	cout << "4- Tamanho da Lista" << endl;
	cout << "? ";	
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
					cout << "Lista � vazia!\n";
				else 
					cout << "Lista n�o � vazia!\n";
				break;			
			case 4:
				cout << "Tamanho da Lista eh " << tamanho(l) << endl;
				break;	
			default:
				cout << "Opcao invalida! \n";	
		}  
		
	}while(op > 0 && op < 5);
	
	cout << "Fim de programa!\n"; 
	
	return 0;
}
