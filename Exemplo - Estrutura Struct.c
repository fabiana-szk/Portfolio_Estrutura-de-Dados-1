// Aula 5 e 6
// Exemplo – Estrutura Struct

#include <stdio.h>
typedef struct {
	char rua[50];
	int numero;
} Endereco;

typedef struct {
	char nome[50];
	int idade;
	Endereco end;
} Pessoa;

int main() {
	Pessoa p;
	printf("Nome: ");
	scanf(" %[^\n]", p.nome);
	printf("Idade: ");
	scanf("%d", &p.idade);
	printf("Rua: ");
	scanf(" %[^\n]", p.end.rua);
	printf("Numero: ");
	scanf("%d", &p.end.numero);
	printf("\nDados:\n");
	printf("Nome: %s", p.nome);
	printf("\nIdade: %d", p.idade);
	printf("\nRua %s", p.end.rua);
	printf("\nNumero: %d\n", p.end.numero);
	return 0;
}