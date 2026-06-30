// Aula 7
// Exemplo - Matrizes

#include <stdio.h>
int main() {
	int m[2][2], num;
	int i, j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d", &m[i][j]);
		}
	}
	printf("\nDigite o numero: ");
	scanf("%d", &num);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d ", m[i][j] * num);
		}
		printf("\n");
	}
	return 0;
}