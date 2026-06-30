// Exemplo – Condição Lógica, Operadores Lógicos, Estrutura if-else 
#include <stdio.h>
int main()
{
	int n1, n2;
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	if(n1 > n2){
		printf("\n%d e maior que %d.", n1, n2);
	} else if(n2 > n1) {
		printf("\n%d e maior que %d.", n2, n1);
	} else {
		printf("\n%d e %d sao iguais.", n1, n2);
	}
	return 0;
}