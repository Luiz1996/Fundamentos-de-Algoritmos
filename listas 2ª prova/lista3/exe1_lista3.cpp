#include <stdio.h>

int main(void){
	int vetor[10] = {}, soma = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite o %d numero do total de 10 numeros: ", (i+1));
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < 10; i++){
		if(vetor[i] % 2 != 0){
			soma += vetor[i];
		}
	}
	
	printf("\nSoma: %d", soma);
}
