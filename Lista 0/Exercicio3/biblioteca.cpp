//cpp fun��es
//Desenvolver as fun��es da biblioteca
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necess�rio para usar as fun��es malloc() e free()
#include <conio.h>
#include <locale.h>

 int i=0;
int cadastro(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("Posi��o [%d] vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
}

int exibir_n(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("%d ",vet[i]);
	}
}

int exibir_i(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("%d ",i+1);
	}
}


int remover(int *vet, int n){
	int n_novo=n-1;
	
	for(int i=0;i<n_novo;i++){
		printf("%d\n",vet[i]);
}
}

int informacao_nome(char *nome, char *end){
	printf("Informe nome: ");
	fflush(stdin);
	gets(nome);
	printf("\nInforme endere�o: ");
	gets(end);
	
	
}
