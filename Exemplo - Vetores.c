// Aula 7
// Exemplo – Vetores

#include <stdio.h>
int main() {
	int v[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i = 0; i < 10; i++) {
		if(v[i] % 2 == 0) {
			printf("%d ", v[i]);
		}
	}
	return 0;
}