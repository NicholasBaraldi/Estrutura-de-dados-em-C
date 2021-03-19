#include <stdio.h>
#include <stdlib.h>
#include "PilhaHeader.h"
struct pilha{
	
	int info;
	struct 	pilha *prox;
};

// Utilizando essas funções de pilha, remover um valor X 
// que está presente em um dada pilha P. Veja que, você só tem 
// acesso direto de remoção ao último valor da pilha, o que foi
// desempilhado para a remoção de X deve ser empilhado novamente.

int main(){
	
	Pilha *pilha, *pilha2, *p;	
	pilha = NULL;
	pilha2 = NULL;
	int N, x, R, M;
	
	printf("Escreva o tamanho da pilha:\n");
	scanf("%d", &N);
	
	for(x = 1; x != N+1; x++)
		pilha = inserir_pilha(pilha, x);
	
	printf("escolha o numero que sera removido:\n");
	scanf("%d", &M);
	printf("\n");
			
	pilha = remover(pilha, &R);
	
	if(R != M)
		pilha2 = inserir_pilha(pilha2, R);	
	
	while(R != M && pilha != NULL){
		pilha = remover(pilha, &R);
		if(R != M)
			pilha2 = inserir_pilha(pilha2, R);
	}
	
	while (pilha2 != NULL){
		pilha2 = remover(pilha2, &R);
		pilha = inserir_pilha(pilha, R);
	}
		
	imprimir_pilha(pilha);
}