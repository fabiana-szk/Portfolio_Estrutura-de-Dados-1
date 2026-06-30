// Aula 9
// Exemplo – Remocao e Esvaziamento

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

void liberar_lista(Lista* l) {
	No* aux = l->inicio;
	while (aux != NULL) {
		No* temp = aux;
		aux = aux->prox;
		free(temp);
	}
	l->inicio = NULL;
}

int main() {
	Lista l;
	l.inicio = NULL;
	inserir(&l, 1);
	inserir(&l, 2);
	inserir(&l, 3);
	liberar_lista(&l);
	if (l.inicio == NULL)
		printf("Lista liberada com sucesso\n");
	return 0;
}