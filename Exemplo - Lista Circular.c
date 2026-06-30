// Aula 11
// Exemplo – Lista Circular

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int info;
	struct No *prox;
} No;

int main() {
	No *n1 = (No*) malloc(sizeof(No));
	No *n2 = (No*) malloc(sizeof(No));
	No *n3 = (No*) malloc(sizeof(No));
	n1->info = 10;
	n2->info = 20;
	n3->info = 30;
	n1->prox = n2;
	n2->prox = n3;
	n3->prox = n1;
	No *l = n1;
	No *p = l;
	while (p->prox != l) {
		p = p->prox;
	}
	printf("Ultimo no: %d\n", p->info);
	return 0;
}