/*Crie um programa em C, que contenha uma fun��o recursiva que receba dois inteiros positivos
k e n e calcule k * n. Utilize apenas adi��es. O programa principal deve solicitar ao usu�rio os valores de k e n e
imprimir o resultado da chamada da fun��o.*/
#include <stdio.h>
#include <stdlib.h>
int sum(int n, int k){
	if(n == 1){
		return k;
	}
 	return k + sum(n - 1, k);	
}

int main(void){
	while(true){
		int n = 0, k = 0, soma = 0;
		
		printf("Digite um numero natual >= 1 para N: ");
		scanf("%d", &n);
		printf("Digite um numero natual >= 1 para K: ");
		scanf("%d", &k);
		
		//validando n para calculo do fatorial
		if(n <= 0 || k <= 0){
			system("cls");
			printf("Numero incorreto, tente novamente!\n\n");
			continue;
		}
	
		soma = sum(n, k);
		printf("\nO valor da multiplicacao entre %d e %d eh: %d\n\n", n, k, soma);
	}
}
