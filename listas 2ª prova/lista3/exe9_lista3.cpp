/*Resolva o exercicio anterior sem criar um arranjo B para inverter os elementos de A. Isto e,
inverta as posicoes dos elementos de A no proprio arranjo.*/
#include <stdio.h>

int main(void){
	int a[15] = {0};
	
	for(int j = 14; j >= 0; j--){
		printf("%do elemento do vetor: ", (15-j));
		scanf("%d", &a[0]);
		a[j] = a[0];
	}
	
	printf("\n");//pilar 1 linha
	//imprimindo vetor
	for(int i = 0; i < 15; i++){
		printf("%d ", a[i]);
	}
}
