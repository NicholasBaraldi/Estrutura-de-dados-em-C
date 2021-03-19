#include <stdio.h>
#include <stdlib.h>
#include "PilhaHeader.h"

struct pilha{
	
	int info;
	struct 	pilha *prox;
};

Pilha *inserir_pilha(Pilha *l, int v){
		
	Pilha *n, *p = l;
	n = (Pilha*)malloc(sizeof(Pilha));
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

void imprimir_pilha(Pilha *l){
	Pilha *p = l;
	while(p->prox != NULL){
		printf("%d\n", p->info);
		p = p->prox;
	}
	printf("%d\n", p->info);
	return;
}

Pilha *remover(Pilha *l, int *R){
	
	Pilha *p, *ant;
	p = l;
	
	if (l->prox == NULL){
		*R = p->info;
		free(l);
		return NULL;
	}	
	
	while(p->prox != NULL){
		ant = p;
        p = p->prox;
	}
	*R = p->info;
	free(p);	
	ant->prox = NULL;
	return l;	
}