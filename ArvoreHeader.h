typedef struct arvore Arv;

Arv *inserir_arvore(Arv *l, int v);

void imprimir_arvore(Arv *l);

int altura(Arv *l);

Arv *balancear_arvore(Arv *l);