// Aula 14
// Exemplo – Insercao em uma fila (Enqueue)

#include <stdio.h>

#define MAX 5

int fila[MAX];
int inicio = 0;
int fim = -1;

void enqueue(int valor) {

    if (fim == MAX - 1) {
        printf("Fila cheia!\n");
        return;
    }

    fim++;
    fila[fim] = valor;
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Primeiro elemento da fila: %d\n", fila[inicio]);

    return 0;
}