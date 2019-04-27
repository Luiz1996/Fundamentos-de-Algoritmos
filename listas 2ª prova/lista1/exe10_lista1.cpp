/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo, calcule e retorne seu
fatorial.*/
#include <stdio.h>

int Fatorial(int x){
	int soma = 1;
	
	for(int i = 2; i <= x; i++){
		soma *= i;
	}
	return soma;
}
	

int main(void){
	int n, fat;
	
	printf("Entre com um numero >= 0: ");
	scanf("%d", &n);
	
	fat = Fatorial(n);
	printf("\nFatorial de %d eh %d.", n, fat);
}
