#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "biblioteca.h"

using namespace std;

int main (int argc, char**argv){
	
    setlocale(LC_ALL, "Portuguese");
    
    int a, v[10];
    
    for(int i=0;i<10;i++){
        printf("Insira o valor da posi��o %d: ", i+1);
        scanf("%d",&v[i]);
    }
    
    inicio:
    cout<<"\nFavor selecionar op��o:\n";
    cout<<"1) Exibir vetor informado.\n ";
    cout<<"2) Exibir elementos �mpares armazenados no vetor.\n";
    cout<<"3) Exibir elementos pares no vetor.\n";
    cout<<"4) Encerrar o programa.\n";
    
    cin>>a;
    
    switch(a){
    	
    	case 1:
    		imprime(v);
    		goto inicio;
    		
    	case 2:
    		impar(v);
    		goto inicio;
    		
    	case 3:
    		par(v);
    		goto inicio;
    		
    	case 4:
    		break;
    	
    	default:
    		cout<<"\nOp��o inv�lida, inisira uma das op��es abaixo .\n";
    		goto inicio;
	}
	
}

