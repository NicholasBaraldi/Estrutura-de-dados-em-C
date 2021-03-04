#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
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
	
	// printf("escolha o numero que sera removido:\n");
	// scanf("%d", &M);
			
	fila = remover(fila);
	
	// if(R != M)
	// 	pilha2 = inserir_pilha(pilha2, R);	
	// 
	// while(R != M && pilha != NULL){
	// 	pilha = remover(pilha, &R);
	// 	if(R != M)
	// 		pilha2 = inserir_pilha(pilha2, R);
	// }
	// 
	// while (pilha2 != NULL){
	// 	pilha2 = remover(pilha2, &R);
	// 	pilha = inserir_pilha(pilha, R);
	// }
		
	imprimir_fila(fila);
}