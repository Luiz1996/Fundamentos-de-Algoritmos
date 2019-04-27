/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo, calcule e retorne o
somatório de 1 até o valor recebido de 1 em 1.*/
#include <stdio.h>

int somador(int n){
	return n++;
}

int main(void){
	int num;
	printf("Insira um numero natural: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		printf("\nSoma: %d", somador(i));
	}	
}
