/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorne a soma dos
divisores desse valor.*/
#include <stdio.h>

int soma_divisores(int x){
	int retorno = 0;
	
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			retorno += i;
		}
	}
	return retorno;
}

int main(void){
	int n, resultado;
	
	printf("Insira um numero natural: ");
	scanf("%d", &n);
	
	resultado = soma_divisores(n);
	printf("Soma dos divisores deu: %d", resultado);
}
