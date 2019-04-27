/*Crie uma função que receba três valores, a, b e c, que são os coeficientes de uma equação do
segundo grau e retorne o valor do delta, que é dado por b2 - 4ac.*/
#include <stdio.h>
#include <math.h>

int Delta(int a, int b, int c){
	return ((pow(b,2)) - ((4*a)*c));
}

int main(void){
	int val_a, val_b, val_c, delta = 0;
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_a);
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_b);
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_c);
	
	delta = Delta(val_a, val_b, val_c);
	printf("\nO valor de delta e: %d", delta);
}

