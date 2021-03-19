#include <stdio.h>
#include <stdlib.h>
#include "ArvoreHeader.h"

struct arvore{
	
	int info;
	struct arvore *esq;
	struct arvore *dir;
};

Arv *inserir_arvore(Arv *l, int v){
	
	if (l == NULL){	
		
		Arv *p = (Arv*)malloc(sizeof(Arv));
	
		p->info = v;
		p->esq = NULL;
		p->dir = NULL;
		return p;
	}
	
	if (v < l->info)
		l->esq = inserir_arvore(l->esq, v);
	else
		l->dir = inserir_arvore(l->dir, v);
	
	return l;
}

void imprimir_arvore(Arv *l){
	
    if (l == NULL) {
        printf("()");
        return;
    }
    
    printf("(%d", l->info);
    imprimir_arvore(l->esq);
    imprimir_arvore(l->dir);
    printf(")");
    return;
}

int altura(Arv *l){
	
	int h_esq, h_dir;
	
	if (l == NULL)
		return 0;
	
	h_esq = altura(l->esq);
	h_dir = altura(l->dir);
		
	if (h_esq > h_dir)
		return (h_esq + 1);
	else
		return(h_dir + 1);
}

Arv *balancear_arvore(Arv *l){
	
	int FB = (altura(l->dir)-altura(l->esq));
	int aux;
	
	if (FB <= -2){
		aux = l->esq;
		l->esq = aux->dir;
		aux->dir = l;
	}
	else if (FB >= 2){
		aux = l->dir;
		l->dir = aux->esq;
		aux->esq = l;
	}
	return aux;
}