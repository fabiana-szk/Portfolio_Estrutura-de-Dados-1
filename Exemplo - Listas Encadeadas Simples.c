// Aula 8
// Exemplo – Listas Encadeadas Simples

#include <stdio.h>
#include <stdlib.h>
typedef struct no {
	int valor;
	struct no* prox;
} No;
No* inicializa() {
	return NULL;
}

No* insere(No* l, int valor) {
	No* novo = (No*) malloc(sizeof(No));
	novo->valor = valor;
	novo->prox = l;
	return novo;
}

void imprime(No* l) {
	while (l != NULL) {
		printf("%d -> ", l->valor);
		l = l->prox;
	}
	printf("NULL\n");
}

int main() {
No* lista = inicializa();
lista = insere(lista, 10);
lista = insere(lista, 20);
imprime(lista);
return 0;
}