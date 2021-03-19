#include <stdio.h>
#include <stdlib.h>
#include "FilaHeader.h"

struct fila{
	
	int info;
	struct 	fila *prox;
};

int main(){
	
	Fila *fila, *p;	
	fila = NULL;
	
	int N, x;
	
	printf("Escreva o tamanho da fila:\n");
	scanf("%d", &N);
	
	for(x = 1; x != N+1; x++)
		fila = inserir_fila(fila, x);
			
	fila = remover(fila);
		
	imprimir_fila(fila);
}