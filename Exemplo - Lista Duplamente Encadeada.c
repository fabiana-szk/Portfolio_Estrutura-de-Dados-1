// Aula 12
// Exemplo – Lista Duplamente Encadeada

#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *ant;
    struct No *prox;
};

void inserirInicio(struct No **inicio, int valor) {

    struct No *novo = (struct No *) malloc(sizeof(struct No));

    novo->dado = valor;
    novo->ant = NULL;
    novo->prox = *inicio;

    if (*inicio != NULL) {
        (*inicio)->ant = novo;
    }

    *inicio = novo;
}

void mostrar(struct No *inicio) {

    while (inicio != NULL) {
        printf("%d ", inicio->dado);
        inicio = inicio->prox;
    }

    printf("\n");
}

int main() {

    struct No *lista = NULL;

    inserirInicio(&lista, 30);
    inserirInicio(&lista, 20);
    inserirInicio(&lista, 10);

    printf("Lista: ");
    mostrar(lista);

    return 0;
}