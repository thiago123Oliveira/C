// Exercícios Anhanguera Estrutura de Dados - Reforço Listas Ligadas


#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct lista {
	int info;
	struct lista* prox;

};
typedef struct lista ListaEnc;

int menu() {
	int op;

	do
	{
		printf("\nEscolha uma Opção:\n\n1 - Destroir Lista\n2 - Imprimir Lista\n3 - Retirar Elemento do Fim da Lista"
			"\n4 - Incluir Elemento em uma Posição da Lista\n5 - Retirar Elemento de uma posição da Lista"
			"\n6 - Retornar a posição de um Elemento da Lista\n7 - Sair\n\n");
		scanf_s("%d", &op);
		system("cls");
		return op;
		
	} while (op != 7);
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int opcao;

	opcao = menu();

	switch (opcao)
	{
	case 1:
		printf("Opção 1");
		opcao = menu();
		break;

	case 2:
		printf("Opção 2");
		opcao = menu();
		break;

	case 3:
		printf("Opção 3");
		opcao = menu();
		break;

	case 4:
		printf("Opção 4");
		opcao = menu();
		break;

	case 5:
		printf("Opção 5");
		opcao = menu();
		break;

	case 6:
		printf("Opção 6");
		opcao = menu();
		break;

	case 7:
		printf("FIM DO PROGRAMA\n\n");
		break;

	default:
		printf("Opção Inválida\n");
		break;
	}

	system("\n\nPause");
}

