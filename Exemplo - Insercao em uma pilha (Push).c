// Aula 13
// Exemplo – Insercao em uma pilha (Push)

#include <stdio.h>

#define MAX 5

int pilha[MAX];
int topo = -1;

void push(int valor) {
    if (topo == MAX - 1) {
        printf("Pilha cheia!\n");
        return;
    }

    topo++;
    pilha[topo] = valor;
}

int main() {

    push(10);
    push(20);
    push(30);

    printf("Topo da pilha: %d\n", pilha[topo]);

    return 0;
}