typedef struct lista Lista;

Lista *criar_lista();

Lista *inserir_lista(Lista *l, int i);

void imprimir_lista(Lista *l);

int vazia(Lista *l);

Lista *buscar(Lista *l, int v);

Lista *remover(Lista *l, int v);

void liberar(Lista *l);

int igual(Lista *l1, Lista *l2);