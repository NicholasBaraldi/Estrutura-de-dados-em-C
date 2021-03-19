#include <stdio.h>
#include <stdlib.h>
#include "FilaHeader.h"

struct fila{
	
	int info;
	struct 	fila *prox;
};

Fila *inserir_fila(Fila *l, int v){
		
	Fila *n, *p = l;
	n = (Fila*)malloc(sizeof(Fila));
	n->info = v;
	n->prox = NULL;
	if(l == NULL)
		return n;
	while (p->prox != NULL){
		// printf("teste\n");
		p = p->prox;
	}	
	p->prox = n;
	return l;
}

void imprimir_fila(Fila *l){
	Fila *p = l;
	while(p->prox != NULL){
		printf("%d, ", p->info);
		p = p->prox;
	}
	printf("%d \n", p->info);
	return;
}

Fila *remover(Fila *l){
	
	Fila *p, *aux;
	p = l;
	
	if (l->prox == NULL){
		free(l);
		return NULL;
	}	
	
	aux = l->prox;
	free(l);
	l = aux;
	
	return l;	
}