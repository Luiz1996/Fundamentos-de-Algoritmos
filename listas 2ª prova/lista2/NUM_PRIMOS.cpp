/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
números PRIMOS de 0 até N em ordem crescente.*/
#include <stdio.h>

void imprime_resultado(int n){
	printf("%d " , n);
}

void num_primo(int n, int num){
	if(n <= num){
		int ver = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0) ver++;
		}
		
		if(ver == 2){
			imprime_resultado(n);
		}
	}
	num_primo(n + 1, num);
}

int main(void){
	int n = 0;

	printf("Digite um numero: ");
	scanf("%d", &n);

	num_primo(2, n);
}