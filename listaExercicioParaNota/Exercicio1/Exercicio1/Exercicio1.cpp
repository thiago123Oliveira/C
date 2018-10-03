// Lista de Exercícios Estrutura de dados para Nota - Exercício 1

/*
1) Considerando lista de valores inteiros, implemente uma função que receba como parâmetro uma lista simplesmente encadeada 
e um valor inteiro n e divida a lista em duas, de tal forma que a segunda lista comece no primeiro nó logo após a primeira ocorrência
de n na lista original. A figura a seguir ilustra esta separação

Thiago de Sousa Oliveira - RA:225626711932
Robson Zakalski - RA: 225729811932
Isaías Micael de Sousa Simões - RA: 216272511932
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;


Lista* inicializa(void) {
	return NULL;
}

//Função para inserir valores na Lista
Lista* inserir(Lista* lst, int v) {
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->info = v;
	novo->prox = lst;
	return novo;
}

void imprimir(Lista* lst) {
	Lista* p = lst;

	if (p == NULL) {
		printf("***********************************************\n");
		printf("*Sua lista está vazia                         *\n");
		printf("***********************************************\n");
	}

	while (p != NULL) {
		printf("%d -> ", p->info);
		p = p->prox;
	}
	printf("\n\n");
}


Lista* separa(Lista* l, int n) {
	int cont = 0;
	int pos = 0;
	int enc = 0;
	Lista* p = l;
	Lista* novo = NULL;

	if (p == NULL) {
		imprimir(p);
		return NULL;
	}
	
	while (p != NULL && p->info != n){
		if (p->info == n) {
			enc++;
			break;
		}
		pos++;
		p = p->prox;
	}

	if (p == NULL) {
		if (enc == 0) {
			printf("Valor não encontrado\n\n");
		}else {
			printf("Último elemento\nNão é possível separar a lista");
		}
		
	}else {
		p = l;
		while (cont != pos) {
			p = p->prox;
			cont++;
		}
		novo = p->prox;
		p->prox = NULL;
	}
	

	printf("Lista 1\n");
	imprimir(l);
	printf("Lista 2\n");
	imprimir(novo);
	
	return NULL;
}



int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	int n;

	Lista *novaLista;
	novaLista = inicializa();

	novaLista = inserir(novaLista, 1);
	novaLista = inserir(novaLista, 2);
	novaLista = inserir(novaLista, 3);
	novaLista = inserir(novaLista, 4);

	printf("Lista Original\n");
	imprimir(novaLista);
	novaLista = separa(novaLista, 4);

	system("Pause");


}

