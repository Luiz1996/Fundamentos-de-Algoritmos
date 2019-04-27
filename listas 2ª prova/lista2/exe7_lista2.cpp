/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/
#include <stdio.h>

void imprime_nuns(int x, int numero_max){
	if(x <= numero_max){
		printf("%d ", x);
		imprime_nuns(x + 1, numero_max);
	}
}

int main(void){
	int n = 0;

	printf("Insira um numero: ");
	scanf("%d", &n);

	imprime_nuns(0, n);
}