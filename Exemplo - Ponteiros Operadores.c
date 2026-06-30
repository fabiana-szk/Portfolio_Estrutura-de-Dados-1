// Aula 4
// Exemplo – Ponteiros: Operadores 

#include <stdio.h>
int main() {
	int vetor[] = {1, 2, 3, 4, 5};
	int t = 5;
	printf("Array sem incremento:\n");
	for (int i = 0; i < t; i++) {
		printf("%d ", *(vetor + i));
	}
	for (int i = 0; i < t; i++) {
		(*(vetor + i))++;
	}
	printf("\n\nArray apos incremento:\n");
	for (int i = 0; i < t; i++) {
		printf("%d ", *(vetor + i));
	}
	return 0;
}