/*Fa�a uma fun��o que receba, por par�metro, um valor inteiro e positivo, calcule e retorne o
somat�rio de 1 at� o valor recebido de 1 em 1.*/
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
