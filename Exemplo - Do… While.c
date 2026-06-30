// Aula 3
// Exemplo  – Do… While
#include <stdio.h>
int main(){
	int N, soma = 0;
	do {
		printf("\nDigite um numero (0 para sair): ");
		scanf("%d", &N);
		soma += N;
	} while (N != 0);
	printf("\nSoma = %d\n", soma);
	return 0;
}
