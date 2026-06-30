// Exemplo - Operadores Aritmeticos e Relacionais, Entrada/Saida de Dados
#include <stdio.h>
int main(){
	int x, y;
	printf("\nDigite o primeiro inteiro: ");
	scanf("%d", &x);
	printf("\nDigite o segundo inteiro: ");
	scanf("%d", &y);
	printf("\nSao iguais? %d\n", x==y);
	printf("\nSoma: %d", x + y);
	printf("\nSubtracao: %d", x - y);
	printf("\nMultiplicacao: %d", x * y);
	printf("\nDivisao: %d", x / y);
	printf("\nResto: %d\n", x % y);
	return 0;
}