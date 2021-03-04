#include <stdio.h>
#include <stdlib.h>
#include "MeuLista.h"

int main()
{
	Lista *lista;
	
	lista = criar_lista();
	
	lista = inserir_lista(lista, 10);
	lista = inserir_lista(lista, 20);
	lista = inserir_lista(lista, 30);
	lista = inserir_lista(lista, 40);
	
	imprimir_lista(lista);
	
	if(vazia(lista))
		printf("A lista esta vazia\n");
	else
		printf("A lista nao esta vazia\n");
	
	if (buscar(lista, 20) == NULL)
		printf("Não achou o numero 20 na lista");
	else 
		printf("achou o numero 20 na lista\n");
	
	lista = remover(lista, 40);
	
	imprimir_lista(lista);
	printf("\n");
	
	Lista *lista2;
	
	lista2 = criar_lista();
	
	lista2 = inserir_lista(lista2, 10);
	lista2 = inserir_lista(lista2, 20);
	lista2 = inserir_lista(lista2, 30);
	
	printf("lista 2:\n");
	imprimir_lista(lista2);
	
	if (igual(lista, lista2) == 1)
		printf("as listas sao iguais\n");
	else
		printf("as listas sao diferente\n");
	
return 0;
}