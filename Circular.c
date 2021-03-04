#include <stdio.h>
#include <stdlib.h>
#include "Circular.h"

struct lista_circular{
	
	int info;
	struct 	lista_circular *prox;
};

LC *inserir_LC(LC *l, int v){
	LC *n, *p = l;
	n = (LC*)malloc(sizeof(LC));
	n->info = v;
	if(l == NULL){
		n->prox = n;
		return n;
	}
	while (p->prox != l)
		p = p->prox;
	p->prox = n;
	n->prox = l;
	return l;
}

void imprimir_LC(LC *l){
	LC *p = l;
	while(p->prox != l){
		printf("%d, ", p->info);
		p = p->prox;
	}
	printf("%d \n", p->info);
	return;
}

LC *remover(LC *l, int v){
	
	LC *p, *ant, *first = l;
	p = l;
	
	if (p->info == v){
		while (p->prox != l)
			p = p->prox;	
		ant = p;
		ant->prox = first->prox;
		l = l->prox;
		free(first);
		return l;
	}
		
	while(p->info != v){
        ant = p;
        p = p->prox;
    }
    
	ant->prox = p->prox;
	
	free(p);
	
	return l;	
}