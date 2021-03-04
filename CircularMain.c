#include <stdio.h>
#include <stdlib.h>
#include "Circular.h"
struct lista_circular{
	
	int info;
	struct 	lista_circular *prox;
};

// representar uma "roda" de N pessoas numeradas de 1 a N.
// Em seguida, elimina cada M-ésima pessoa da lista a partir da 
// primeira. Imprime o número da pessoa que sobrar.

int main(){
	
	LC *lista, *p;
	int N, M, x, z, aux;	
	lista = NULL;
	
	printf("Escreva o numero de pessoas na roda:\n");
	scanf("%d", &N);
	
	for(x = 1; x != N+1; x++)
		lista = inserir_LC(lista, x);
	
	p = lista;
	
	imprimir_LC(lista);
	
	// lista = remover(lista, 2);
	// 
	// imprimir_LC(lista);

	printf("escolha de quantas em quantas pessoas vc quer eliminar:\n");
	scanf("%d", &M);
	
	while (p->prox != p){
		for(z = 1; z != M; z++){
			p = p->prox;
		}	
		aux = p->info;
		lista = remover(lista, aux);
		imprimir_LC(lista);
		p = lista;
	}	
	printf("results:\n");
	imprimir_LC(lista);
}