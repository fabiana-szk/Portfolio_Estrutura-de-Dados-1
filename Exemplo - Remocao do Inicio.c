// Aula 10
// Exemplo – Remocao do Inicio

#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No *prox;
};

void removerInicio(struct No **inicio) {
    if (*inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    struct No *temp = *inicio;
    *inicio = (*inicio)->prox;
    free(temp);

    printf("Primeiro elemento removido com sucesso!\n");
}
