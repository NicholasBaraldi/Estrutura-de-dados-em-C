#include <stdio.h>
#include <stdlib.h>
#include "ArvoreHeader.h"

int main(){
	
Arv *Arvere = NULL;

int V[5] = {10, 9, 8, 7, 5};
int i;

for(i = 0; i < 5; i++){
	Arvere = inserir_arvore(Arvere, V[i]);
}

imprimir_arvore(Arvere);

printf("\n%d", altura(Arvere));

return 0;
}