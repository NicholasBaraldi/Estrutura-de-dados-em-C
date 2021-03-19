#include <stdio.h>
#include <stdlib.h>
#include "ListaHeader.h"

struct lista{
	
	int info;
	struct lista *prox;
};

Lista *criar_lista(){
	return NULL;
}

Lista *inserir_lista(Lista *l, int i){
	
	Lista *Nova_Lista = (Lista*)malloc(sizeof(Lista));
	Nova_Lista->info = i;
	Nova_Lista->prox = l;
	return Nova_Lista;
}

void imprimir_lista(Lista *l){
	
	Lista *p;
	for (p = l; p != NULL; p = p->prox)
		printf("%d\n", p->info);
}

int vazia(Lista *l){
	
	if (l == NULL)
		return 1;
	return 0;
}

Lista *buscar(Lista *l, int v){
	
	Lista *p;
	for (p = l; p != NULL; p = p->prox){
		if (p->info == v)
			return p;
	}	
	return NULL;	
}

Lista* remover(Lista *l, int v){
    Lista *p, *ant;

    p = l;
    ant = NULL;

    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }

    if(ant != NULL && p != NULL && p->prox != NULL){
        ant->prox = p->prox;
        
    }else if(ant == NULL){
        l = p->prox;
        
    }else{
        ant->prox = NULL;
    }
    free(p);

    return(l);
}

void liberar(Lista *l){
	Lista *p = l;
	Lista *a = NULL;
	while(p != NULL){
		a = p->prox;
		free(p);
		p = a;
	}
}

int igual(Lista *l1, Lista *l2){
	Lista *p = l1;
	Lista *d = l2;
	
	while (p != NULL && d != NULL){
		if(p->info == d->info){
			p = p->prox;
			d = d->prox;
		}	
		else
			return 0;	
		}
	return 1;	
	}
