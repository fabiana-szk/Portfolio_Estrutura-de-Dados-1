// Aula 9
// Exemplo – Busca

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int valor;
	struct no* prox;
} No;

typedef struct lista {
	No* inicio;
} Lista;

void inserir(Lista* l, int v) {
	No* novo = (No*) malloc(sizeof(No));
	novo->valor = v;
	novo->prox = l->inicio;
	l->inicio = novo;
}

int conta_valor(Lista* l, int v) {
	int cont = 0;
	No* aux = l->inicio;
	while (aux != NULL) {
		if (aux->valor == v)
			cont++;
		aux = aux->prox;
	}
	return cont;
}

int main() {
	Lista l;
	l.inicio = NULL;
	inserir(&l, 3);
	inserir(&l, 2);
	inserir(&l, 3);
	inserir(&l, 3);
	printf("O valor 3 aparece %d vezes", conta_valor(&l, 3));
	return 0;
}