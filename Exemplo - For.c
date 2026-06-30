// Aula 3
// Exemplo – For
#include <stdio.h>
int main(){
	int i, num, negativos = 0;
	for(i = 1; i <= 10; i ++){
		printf("\nDigite o %d numero: ", i);
		scanf("%d", &num);
		if(num<0){
		negativos++;
		}
	}
	printf("\nNegativos = %d\n", negativos);
	return 0;
}